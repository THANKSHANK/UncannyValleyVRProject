// Copyright (c) Meta Platforms, Inc. and affiliates.

using Oculus.Movement.AnimationRigging;
using UnityEngine;
using UnityEngine.Assertions;
using static OVRUnityHumanoidSkeletonRetargeter;

namespace Oculus.Movement.Utils
{
    /// <summary>
    /// Allows visualizing bones found in an OVRSkeleton component for full-body characters.
    /// </summary>
    [DefaultExecutionOrder(230)]
    public class FullBodyOVRSkeletonBoneVisualizer
        : BoneVisualizer<OVRHumanBodyBonesMappings.FullBodyTrackingBoneId>
    {
        /// <summary>
        /// OVRSkeleton component to visualize bones for.
        /// </summary>
        [SerializeField]
        [Tooltip(OVRSkeletonBoneVisualizerTooltips.OVRSkeletonComp)]
        protected OVRSkeleton _ovrSkeletonComp;

        /// <summary>
        /// Whether to visualize bind pose or not.
        /// </summary>
        [SerializeField]
        [Tooltip(OVRSkeletonBoneVisualizerTooltips.VisualizeBindPose)]
        protected bool _visualizeBindPose = false;

        /// </ inheritdoc>
        protected override void Awake()
        {
            base.Awake();
        }

        protected override void Start()
        {
            base.Start();
            Assert.IsNotNull(_ovrSkeletonComp);
        }

        /// <inheritdoc />
        protected override int GetBoneCount()
        {
            return (int)OVRSkeleton.BoneId.FullBody_End;
        }

        /// <inheritdoc />
        protected override BoneTuple GetBoneTuple(int currentBone)
        {
            // avoid visualizing root to hips, since we have legs now
            var currentBoneId = (OVRSkeleton.BoneId)currentBone;
            if (currentBoneId == OVRSkeleton.BoneId.FullBody_Root)
            {
                currentBoneId = OVRSkeleton.BoneId.FullBody_Hips;
            }
            // TODO: figure out how to visualize twist joints in foot,
            // OVRHumanBodeBonesMapping does not have it right now
            if (!OVRHumanBodyBonesMappings.FullBoneIdToJointPair.ContainsKey(currentBoneId))
            {
                currentBoneId = OVRSkeleton.BoneId.FullBody_Hips;
            }

            var boneTuple = OVRHumanBodyBonesMappings.FullBoneIdToJointPair[currentBoneId];
            return new BoneTuple((int)boneTuple.Item1, (int)boneTuple.Item2);
        }

        /// <inheritdoc />
        protected override Transform GetBoneTransform(int currentBone)
        {
            return RiggingUtilities.FindBoneTransformFromSkeleton(_ovrSkeletonComp,
                currentBone, _visualizeBindPose);
        }

        /// <inheritdoc />
        protected override bool TryGetBoneTransforms(BoneTuple tupleItem,
            out Transform firstJoint, out Transform secondJoint)
        {
            if (!_ovrSkeletonComp.IsDataValid)
            {
                firstJoint = secondJoint = null;
                return false;
            }
            firstJoint = RiggingUtilities.FindBoneTransformFromSkeleton(
                _ovrSkeletonComp,
                tupleItem.FirstBoneId,
                _visualizeBindPose);

            bool secondJointInvalid = tupleItem.SecondBone >= OVRHumanBodyBonesMappings.FullBodyTrackingBoneId.FullBody_End;

            secondJoint = secondJointInvalid
                ? firstJoint.GetChild(0)
                : RiggingUtilities.FindBoneTransformFromSkeleton(_ovrSkeletonComp,
                    tupleItem.SecondBoneId, _visualizeBindPose);
            return true;
        }

        /// <inheritdoc />
        protected override AvatarMaskBodyPart GetAvatarBodyPart(int currentBone)
        {
            return BoneMappingsExtension.OVRSkeletonFullBodyBoneIdToAvatarBodyPart[(OVRSkeleton.BoneId)currentBone];
        }

        /// <inheritdoc />
        public override void SetBody(GameObject body)
        {
            _ovrSkeletonComp = body.GetComponent<OVRSkeleton>();
            ResetBoneVisuals();
        }
    }
}
