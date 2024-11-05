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

using Oculus.Interaction;
using TMPro;
using UnityEngine;

public class MRPassthrough : MonoBehaviour
{
    public static class PassThrough
    {
        public static bool _isPassThroughOn;
        public static bool _isLocomotionSceneOn;
    }

    [Tooltip("Objects that shouldn't be rendered during passthrough")]
    [Header("Passthrough Objects To Remove")]
    [SerializeField] private GameObject[] _objects;
    [Tooltip("These are UI objects that should be toggled ON/OFF during passthrough")]
    [Header("UI GameObjects to toggle ON/OFF")]
    [SerializeField] private TMP_Text _passThroughText;
    [SerializeField] private PokeInteractable _locomotionInteractable;
    [SerializeField] private PokeInteractable _passThroughInteractable;

    private OVRPassthroughLayer _layer;    
    private Camera _camera;

    private void Start()
    {
        _layer = FindObjectOfType<OVRPassthroughLayer>();
        _camera = OVRManager.FindMainCamera();

        if (OVRManager.HasInsightPassthroughInitFailed())
        {
            _passThroughInteractable.enabled = false;
        }
        else
        {
            if (PassThrough._isPassThroughOn)
            {
                TurnPassThroughOn();
            }
            else
            {
                TurnPassThroughOff();
                if (PassThrough._isLocomotionSceneOn)
                {
                    _passThroughInteractable.enabled = false;
                }
                else
                {
                    _passThroughInteractable.enabled = true;
                }
            }
        }
    }

    public void TurnLocoMotionSceneOn()
    {
        PassThrough._isLocomotionSceneOn = true;
    }

    public void TurnLocoMotionSceneOff()
    {
        PassThrough._isLocomotionSceneOn = false;
    }

    public void TogglePassThrough()
    {
        if (PassThrough._isPassThroughOn)
        {
            TurnPassThroughOff();
        }
        else
        {
            TurnPassThroughOn();
        }
    }

    private void TurnPassThroughOn()
    {
        PassThrough._isPassThroughOn = true;
        _layer.textureOpacity = 1;
        _locomotionInteractable.enabled = false;
        _passThroughText.text = "Passthrough OFF";
        _camera.clearFlags = CameraClearFlags.SolidColor;
        foreach ( GameObject obj in _objects)
        {
            obj.SetActive(false);
        }
    }

    private void TurnPassThroughOff()
    {
        PassThrough._isPassThroughOn = false;
        _layer.textureOpacity = 0;
        _locomotionInteractable.enabled = true;
        _passThroughText.text = "Passthrough ON";
        _camera.clearFlags = CameraClearFlags.Skybox;
        foreach (GameObject obj in _objects)
        {
            obj.SetActive(true);
        }
    }
}
