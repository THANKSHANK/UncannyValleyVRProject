using Oculus.Interaction;
using UnityEngine;

namespace Oculus.Movement.Tracking
{
  
    public class AvatarFaceCorrectively : OVRCustomFace
    {
        public bool CorrectivesEnabled { get; set; }
        public float[] ExpressionWeights { get; private set; }
        public bool FreezeExpressionWeights { get; set; }
        [SerializeField]
        [Tooltip("Whether or not to force the jaw open to accomodate an extended tongue")]
        protected bool _forceJawDropForTongue = true;
        public bool ForceJawDropForTongue
        {
            get { return _forceJawDropForTongue; }
            set { _forceJawDropForTongue = value; }
        }

        [SerializeField]
        [Tooltip("Minimum value of TongueOut to force JawDrop open")]
        private float _tongueOutThreshold = 0.25f;

        [SerializeField]
        [Tooltip("Minimum value of JawDrop to force when the user's tongue is out")]
        private float _minJawDrop = 0.5f;
        [SerializeField]
        [Optional]
        [Tooltip(CorrectivesFaceTooltips.BlendshapeModifier)]
        protected BlendshapeModifier _blendshapeModifier;

        public BlendshapeModifier BlendshapeModifier
        {
            get { return _blendshapeModifier; }
            set { _blendshapeModifier = value; }
        }

       
        [SerializeField]
        [Optional]
        [Tooltip(CorrectivesFaceTooltips.CombinationShapesTextAsset)]
        protected TextAsset _combinationShapesTextAsset;

        public TextAsset CombinationShapesTextAsset
        {
            get { return _combinationShapesTextAsset; }
            set { _combinationShapesTextAsset = value; }
        }
        
        public RetargetingType RetargetingTypeField
        {
            get => RetargetingValue;
            set => RetargetingValue = value;
        }
        
        public bool AllowDuplicateMappingField
        {
            get => AllowDuplicateMapping;
            set => AllowDuplicateMapping = value;
        }
        protected float[] _cachedBlendshapeValues;

        protected CorrectivesModule _correctivesModule;
        
        public float nextBlinkTimeL = 0.1f; // Next time left eye should blink
        public float nextBlinkTimeR = 0.1f; // Next time right eye should blink
        public float blinkDurationL = 0.1f; // Duration for left eye blink
        public float blinkDurationR = 0.1f; // Duration for right eye blink
        private bool isBlinkingL = false;
        private bool isBlinkingR = false;

        // Blinking happens randomly in a time range between minBlinkInterval and maxBlinkInterval
        public float minBlinkInterval = 2.0f;  // Minimum time between blinks
        public float maxBlinkInterval = 5.0f;  // Maximum time between blinks
        
        public float eyeMotionSpeed = 2.0f;
        public float eyeMotionAmplitude = 2.0f;
       
        private void ApplySubtleEyeMotion()
        {
            float time = Time.time;
            if (time > nextBlinkTimeL && !isBlinkingL)
            {
                StartBlinkLeftEye(); 
            }
            if (time > nextBlinkTimeR && !isBlinkingR)
            {
                StartBlinkRightEye(); 
            }
            if (isBlinkingL)
            {
                HandleBlinkProgression(ref isBlinkingL, ref blinkDurationL, OVRPlugin.FaceExpression2.Eyes_Closed_L);
            }
            if (isBlinkingR)
            {
                HandleBlinkProgression(ref isBlinkingR, ref blinkDurationR, OVRPlugin.FaceExpression2.Eyes_Closed_R);
            }
        }

        private void StartBlinkLeftEye()
        {
            isBlinkingL = true;
            float noiseScale = 0.5f; 
            float noiseValue = Mathf.PerlinNoise(Time.time * noiseScale, 0.0f);
            blinkDurationL = Mathf.Lerp(0.05f, 0.2f, noiseValue); // Smoothly vary the blink duration
            nextBlinkTimeL = Time.time + Random.Range(minBlinkInterval, maxBlinkInterval); 
        }

        private void StartBlinkRightEye()
        {
            isBlinkingR = true;
            float noiseScale = 0.5f; // Adjust this value for desired smoothness
            float noiseValue = Mathf.PerlinNoise(Time.time * noiseScale, 0.0f);
            blinkDurationL = Mathf.Lerp(0.05f, 0.2f, noiseValue);
            nextBlinkTimeR = Time.time + Random.Range(minBlinkInterval, maxBlinkInterval); 
        }

        private void HandleBlinkProgression(ref bool isBlinking, ref float blinkDuration, OVRPlugin.FaceExpression2 eyeCloseExpression)
        {
            float blinkProgress = (Time.time - (nextBlinkTimeL - blinkDuration)) / blinkDuration;
            if (blinkProgress < 0.5f)
            {
                ExpressionWeights[(int)eyeCloseExpression] += Mathf.Lerp(0.0f, 1.0f, blinkProgress * 2.0f); 
            }
            else
            {
                ExpressionWeights[(int)eyeCloseExpression] += Mathf.Lerp(1.0f, 0.0f, (blinkProgress - 0.5f) * 2.0f); 
            }
            if (blinkProgress >= 1.0f)
            {
                isBlinking = false;
            }
        }

        protected override void Awake()
        {
            base.Awake();
            InitializeExpressionWeights();

            CorrectivesEnabled = true;
            if (_combinationShapesTextAsset != null)
            {
                _correctivesModule = new CorrectivesModule(_combinationShapesTextAsset);
            }
        }
        
        public OVRFaceExpressions.FaceExpression GetFaceExpressionForIndex(int blendShapeIndex)
        {
            return GetFaceExpression(blendShapeIndex);
        }
        
        protected void InitializeExpressionWeights()
        {
            ExpressionWeights = new float[(int)OVRFaceExpressions.FaceExpression.Max];
            for (int i = 0; i < (int)OVRFaceExpressions.FaceExpression.Max; i++)
            {
                ExpressionWeights[i] = 0.0f;
            }
        }
        
        public void ActivateFaceExpression(OVRFaceExpressions.FaceExpression faceExpression)
        {
            if (ExpressionWeights == null ||
                ExpressionWeights.Length != (int)OVRFaceExpressions.FaceExpression.Max)
            {
                InitializeExpressionWeights();
            }
            InitializeCachedValues();

            int numBlendshapes = SkinnedMesh.sharedMesh.blendShapeCount;
            for (int blendShapeIndex = 0; blendShapeIndex < numBlendshapes; ++blendShapeIndex)
            {
                OVRFaceExpressions.FaceExpression blendShapeToFaceExpression = GetFaceExpression(blendShapeIndex);
                if (blendShapeToFaceExpression >= OVRFaceExpressions.FaceExpression.Max ||
                    blendShapeToFaceExpression < 0)
                {
                    continue;
                }
                ExpressionWeights[(int)blendShapeToFaceExpression] = (blendShapeToFaceExpression == faceExpression) ?
                    1.0f : 0.0f;
            }

            InitializeCachedValues();
            UpdateCachedMeshValues();
            if (_correctivesModule != null && CorrectivesEnabled)
            {
                _correctivesModule.ApplyCorrectives(_cachedBlendshapeValues);
            }

            UpdateSkinnedMesh();
        }


        protected override void Update()
        {
            if (ExpressionWeights == null ||
                ExpressionWeights.Length != (int)OVRFaceExpressions.FaceExpression.Max)
            {
                InitializeExpressionWeights();
            }

            if (_faceExpressions.enabled &&
                _faceExpressions.FaceTrackingEnabled &&
                _faceExpressions.ValidExpressions)
            {
                UpdateExpressionWeights();
                ApplySubtleEyeMotion();
                InitializeCachedValues();
                UpdateCachedMeshValues();
                if (_correctivesModule != null && CorrectivesEnabled)
                {
                    _correctivesModule.ApplyCorrectives(_cachedBlendshapeValues);
                }
                UpdateSkinnedMesh();
            }
        }


        protected void UpdateExpressionWeights()
        {
            if (FreezeExpressionWeights)
            {
                return;
            }

            int numBlendshapes = SkinnedMesh.sharedMesh.blendShapeCount;
            for (int blendShapeIndex = 0; blendShapeIndex < numBlendshapes; ++blendShapeIndex)
            {
                OVRFaceExpressions.FaceExpression blendShapeToFaceExpression = GetFaceExpression(blendShapeIndex);
                if (blendShapeToFaceExpression >= OVRFaceExpressions.FaceExpression.Max ||
                    blendShapeToFaceExpression < 0)
                {
                    continue;
                }
                ExpressionWeights[(int)blendShapeToFaceExpression] = _faceExpressions[blendShapeToFaceExpression];
            }
        }
        
        protected void InitializeCachedValues()
        {
            int numBlendshapes = SkinnedMesh.sharedMesh.blendShapeCount;
            if (_cachedBlendshapeValues == null)
            {
                _cachedBlendshapeValues = new float[numBlendshapes];
                for (int i = 0; i < numBlendshapes; i++)
                {
                    _cachedBlendshapeValues[i] = 0.0f;
                }
            }
        }
        protected void UpdateCachedMeshValues()
        {
            int numBlendshapes = SkinnedMesh.sharedMesh.blendShapeCount;
            for (int blendShapeIndex = 0; blendShapeIndex < numBlendshapes; ++blendShapeIndex)
            {
                OVRFaceExpressions.FaceExpression blendShapeToFaceExpression = GetFaceExpression(blendShapeIndex);
                if (blendShapeToFaceExpression >= OVRFaceExpressions.FaceExpression.Max || blendShapeToFaceExpression < 0)
                {
                    continue;
                }

                float currentWeight = ExpressionWeights[(int)blendShapeToFaceExpression];
                // Recover true eyes closed values
                if (blendShapeToFaceExpression == OVRFaceExpressions.FaceExpression.EyesClosedL)
                {
                    currentWeight += ExpressionWeights[(int)OVRFaceExpressions.FaceExpression.EyesLookDownL];
                }
                else if (blendShapeToFaceExpression == OVRFaceExpressions.FaceExpression.EyesClosedR)
                {
                    currentWeight += ExpressionWeights[(int)OVRFaceExpressions.FaceExpression.EyesLookDownR];
                }
                else if (ForceJawDropForTongue && blendShapeToFaceExpression == OVRFaceExpressions.FaceExpression.JawDrop)
                {
                    // Fetch this from the underlying expressions in case the renderer being fixed
                    // has JawDrop but not TongueOut.
                    var tongueWeight = ExpressionWeights[(int)OVRFaceExpressions.FaceExpression.TongueOut];
                    if (tongueWeight > _tongueOutThreshold)
                    {
                        currentWeight = Mathf.Max(_minJawDrop, currentWeight);
                    }
                }

                if (_blendshapeModifier != null)
                {
                    currentWeight = _blendshapeModifier.GetModifiedWeight(blendShapeToFaceExpression, currentWeight);
                }
                _cachedBlendshapeValues[blendShapeIndex] = currentWeight * BlendShapeStrengthMultiplier;
            }
        }

       
        protected void UpdateSkinnedMesh()
        {
            var numBlendshapes = _cachedBlendshapeValues.Length;
            for (int blendShapeIndex = 0; blendShapeIndex < numBlendshapes; ++blendShapeIndex)
            {
                SkinnedMesh.SetBlendShapeWeight(blendShapeIndex, _cachedBlendshapeValues[blendShapeIndex]);
            }
        }
    }
}
