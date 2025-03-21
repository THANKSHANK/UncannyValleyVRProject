/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

Shader "Unlit/VideoPlayerAnimBackground"
{
    Properties
    {
        [PerRendererData] _MainTex ("Texture", 2D) = "white" {} 
        _Color ("Tint", Color) = (1,1,1,1)

        [HideInInspector] _StencilComp		("Stencil Comparison", Float) = 0
	    [HideInInspector] _Stencil			("Stencil ID", Float) = 0
	    [HideInInspector] _StencilOp		("Stencil Operation", Float) = 0
	    [HideInInspector] _StencilWriteMask	("Stencil Write Mask", Float) = 255
	    [HideInInspector] _StencilReadMask	("Stencil Read Mask", Float) = 255

	    _ColorMask ("Color Mask", Float) = 15
        [Toggle(UNITY_UI_ALPHACLIP)] _UseUIAlphaClip ("Use Alpha Clip", Float) = 0
    }
    SubShader
    {
        Tags
	    {
		    "Queue"="Transparent"
		    "IgnoreProjector"="True"
		    "RenderType"="Transparent"
	    }

	    Stencil
	    {
		    Ref [_Stencil]
		    Comp [_StencilComp]
		    Pass [_StencilOp]
		    ReadMask [_StencilReadMask]
		    WriteMask [_StencilWriteMask]
	    }

	    Cull Off
        Lighting Off
        ZWrite Off
        ZTest [unity_GUIZTestMode]
        Blend SrcAlpha OneMinusSrcAlpha, OneMinusDstAlpha One
        ColorMask RGBA

        Pass
        {
            Name "Default"
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 2.0
		    #pragma multi_compile __ UNITY_UI_CLIP_RECT
		    #pragma multi_compile __ UNITY_UI_ALPHACLIP

            #include "UnityCG.cginc"
            #include "UnityUI.cginc"
            #include "../../ThirdParty/Box2DSignedDistance.cginc"

            struct vertexInput
            {
                float4 vertex : POSITION;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct fragmentInput
            {
                float4 vertex : SV_POSITION;
                float4 worldPosition : TEXCOORD1;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _Color;
            fixed4 _TextureSampleAdd;
            //--------------------
            float2 columnDirection;
            float2 rowDirection;
            float animationTime;
            float3 colorA;
            float3 colorB;

            fragmentInput vert(vertexInput input)
            {
                fragmentInput output;

                UNITY_INITIALIZE_OUTPUT(fragmentInput, output);
                UNITY_SETUP_INSTANCE_ID(input);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(output);

                output.worldPosition = input.vertex;
                output.vertex = UnityObjectToClipPos(output.worldPosition);

                return output;
            }

            float modSection(float dist, float size, float offset) {
                float distOffset = dist + offset;
                float absDist = abs(distOffset);
                float value = (absDist % size) / size;
                return distOffset < 0.0 ? 1.0 - value : value;
            }

            fixed4 frag(fragmentInput input) : SV_Target {
                float xDist = dot(input.worldPosition.xy, rowDirection);
                float yDist = dot(input.worldPosition.xy, columnDirection);
                
                const float size = 80.0;
                const float offset = size * 0.5f;
                float columnIndex = (abs(floor(xDist / size)) % 2.0);

                float animDirection = 1.0 - 2.0 * columnIndex;
                yDist += animationTime * 20.0 * animDirection;

                float u = modSection(xDist, size, 0.0);
                float v = modSection(yDist, size, columnIndex * offset);
                float2 uv = float2(u, v);
                float boxDist = sdRoundBox(uv - (0.5).xx, (0.35).xx, (0.1).xxxx);

                float3 color = lerp(colorA, colorB, step(0.01, boxDist));

                return float4(color, 1.0);
            }
            ENDCG
        }
    }
}
