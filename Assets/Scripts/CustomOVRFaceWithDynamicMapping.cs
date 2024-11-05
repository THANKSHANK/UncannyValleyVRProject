using System;
using UnityEngine;
using UnityEngine.Assertions;

public class CustomOVRFaceWithDynamicMapping : OVRCustomFace
{
    [SerializeField]
    private OVRFaceExpressions.FaceExpression[] _mappings;

    protected override void Start()
    {
        base.Start();

        // Get the SkinnedMeshRenderer component and determine the blendshape count
        var skinnedMeshRenderer = GetComponent<SkinnedMeshRenderer>();
        int blendShapeCount = skinnedMeshRenderer.sharedMesh.blendShapeCount;

        // Ensure _mappings array is initialized and matches the blendshape count
        if (_mappings == null || _mappings.Length != blendShapeCount)
        {
            // Initialize _mappings to match blendShapeCount dynamically
            _mappings = new OVRFaceExpressions.FaceExpression[blendShapeCount];
            InitializeMappings(blendShapeCount); // Populate with default or custom expressions
        }

        // Ensure the mapping length is consistent with the blendshape count
        Assert.AreEqual(_mappings.Length, blendShapeCount, "Mapping out of sync with shared mesh.");
    }

    private void InitializeMappings(int blendShapeCount)
    {
        // Populate mappings with a default or custom expression
        for (int i = 0; i < blendShapeCount; i++)
        {
            _mappings[i] = OVRFaceExpressions.FaceExpression.Max;  // Use default, or specify custom mappings
        }
    }

    protected override OVRFaceExpressions.FaceExpression GetFaceExpression(int blendShapeIndex)
    {
        Assert.IsTrue(blendShapeIndex < _mappings.Length && blendShapeIndex >= 0);
        return _mappings[blendShapeIndex];
    }
}