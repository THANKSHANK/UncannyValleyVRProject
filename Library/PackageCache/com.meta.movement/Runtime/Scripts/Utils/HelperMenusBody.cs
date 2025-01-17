// Copyright (c) Meta Platforms, Inc. and affiliates.

using Oculus.Movement.AnimationRigging;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations.Rigging;
using static Oculus.Movement.AnimationRigging.ExternalBoneTargets;

namespace Oculus.Movement.Utils
{
    /// <summary>
    /// Provides useful menus to help one set up body tracking technologies
    /// on characters.
    /// </summary>
    public static class HelperMenusBody
    {
#if UNITY_EDITOR
        private const string _MOVEMENT_SAMPLES_BT_MENU =
            "Body Tracking/";

        private const string _ANIM_RIGGING_RETARGETING_FULL_BODY_MENU_CONSTRAINTS =
            "Animation Rigging Retargeting (full body) (constraints)";

        private const string _ANIM_RIGGING_RETARGETING_MENU_CONSTRAINTS =
            "Animation Rigging Retargeting (upper body) (constraints)";

        [UnityEditor.MenuItem(AddComponentsHelper._MOVEMENT_SAMPLES_MENU + _MOVEMENT_SAMPLES_BT_MENU +
                  _ANIM_RIGGING_RETARGETING_FULL_BODY_MENU_CONSTRAINTS)]
        private static void SetupFullBodyCharacterForAnimationRiggingRetargetingConstraints()
        {
            foreach (var activeGameObject in UnityEditor.Selection.gameObjects)
            {
                var animator = activeGameObject.GetComponent<Animator>();
                AnimationUtilities.UpdateToAnimatorPose(animator, false);
                var restPoseObjectHumanoid = AddComponentsHelper.GetRestPoseObject(AddComponentsHelper.CheckIfTPose(animator));
                SetupCharacterForAnimationRiggingRetargetingConstraints(activeGameObject, restPoseObjectHumanoid, true, true);
            }
        }

        [UnityEditor.MenuItem(AddComponentsHelper._MOVEMENT_SAMPLES_MENU + _MOVEMENT_SAMPLES_BT_MENU +
                              _ANIM_RIGGING_RETARGETING_MENU_CONSTRAINTS)]
        private static void SetupUpperBodyCharacterForAnimationRiggingRetargetingConstraints()
        {
            foreach (var activeGameObject in UnityEditor.Selection.gameObjects)
            {
                var animator = activeGameObject.GetComponent<Animator>();
                AnimationUtilities.UpdateToAnimatorPose(animator, false);
                var restPoseObjectHumanoid = AddComponentsHelper.GetRestPoseObject(AddComponentsHelper.CheckIfTPose(animator));
                SetupCharacterForAnimationRiggingRetargetingConstraints(activeGameObject, restPoseObjectHumanoid, true, false);
            }
        }
#endif

        /// <summary>
        /// Setup a character for retargeting with animation rigging constraints.
        /// </summary>
        /// <param name="activeGameObject">The character gameObject.</param>
        /// <param name="restPoseObjectHumanoid">The rest pose closest to the character rest pose.</param>
        /// <param name="addConstraints">True if constraints should be added.</param>
        /// <param name="isFullBody">True if full body.</param>
        /// <param name="runtimeInvocation">True if in runtime.</param>
        public static void SetupCharacterForAnimationRiggingRetargetingConstraints(
            GameObject activeGameObject,
            RestPoseObjectHumanoid restPoseObjectHumanoid,
            bool addConstraints,
            bool isFullBody,
            bool runtimeInvocation = false)
        {
            try
            {
                AddComponentsHelper.ValidGameObjectForAnimationRigging(activeGameObject);
            }
            catch (InvalidOperationException e)
            {
#if UNITY_EDITOR
                if (runtimeInvocation)
                {
                    Debug.LogError("Retargeting setup error.");
                }
                else
                {
                    UnityEditor.EditorUtility.DisplayDialog("Retargeting setup error.", e.Message, "Ok");
                }
#else
                Debug.LogError("Retargeting setup error.");
#endif
                return;
            }
#if UNITY_EDITOR
            if (!runtimeInvocation)
            {
                UnityEditor.Undo.IncrementCurrentGroup();
            }
#endif
            // Store the previous transform data.
            var previousPositionAndRotation =
                new AffineTransform(activeGameObject.transform.position, activeGameObject.transform.rotation);
            Animator animatorComp = activeGameObject.GetComponentInChildren<Animator>(true);

            // Bring the object to root so that the auto adjustments calculations are correct.
            activeGameObject.transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);

            // Add the retargeting and body tracking components at root first.
            RetargetingLayer retargetingLayer =
                AddComponentsHelper.AddMainRetargetingComponent(activeGameObject, isFullBody, runtimeInvocation);

            GameObject rigObject;
            RigBuilder rigBuilder;
            (rigBuilder, rigObject) =
                AddComponentsHelper.AddBasicAnimationRiggingComponents(activeGameObject, runtimeInvocation);
            // Disable rig builder to allow T-pose to be captured by retargeting without having animation
            // rigging forcing character into the "motorcycle pose" first.
            rigBuilder.enabled = false;

            List<MonoBehaviour> constraintMonos = new List<MonoBehaviour>();
            RetargetingAnimationConstraint retargetConstraint =
                AddComponentsHelper.AddRetargetingConstraint(rigObject, retargetingLayer, runtimeInvocation);
            retargetingLayer.RetargetingConstraint = retargetConstraint;
            constraintMonos.Add(retargetConstraint);

            // Destroy old components
            AddComponentsHelper.DestroyLegacyComponents(activeGameObject, rigObject);

            // Add retargeting animation rig to tie everything together.
            AddComponentsHelper.AddRetargetingAnimationRig(
                retargetingLayer, rigBuilder, constraintMonos.ToArray());
#if UNITY_EDITOR
            if (!runtimeInvocation)
            {
                UnityEditor.EditorUtility.SetDirty(retargetingLayer);
            }
#endif

            // Add retargeting processors to the retargeting layer.
            AddComponentsHelper.AddCorrectBonesRetargetingProcessor(retargetingLayer);
            AddComponentsHelper.AddCorrectHandRetargetingProcessor(retargetingLayer);

            // Body deformation.
            if (addConstraints)
            {
                // Animator.GetBoneTransform(...) only works on enabled animators, so it must be enabled here.
                activeGameObject.SetActive(true);
                var deformationConstraint = CreateOrGetDeformationConstraint(rigObject, runtimeInvocation);
                BoneTarget[] boneTargets = AddComponentsHelper.AddBoneTargets(
                    deformationConstraint.gameObject, animatorComp, isFullBody, runtimeInvocation);
                deformationConstraint = AddDeformationConstraint(
                    rigObject, animatorComp, boneTargets, restPoseObjectHumanoid, isFullBody, runtimeInvocation);
                constraintMonos.Add(deformationConstraint);

                // Setup retargeted bone targets.
                AddComponentsHelper.SetupExternalBoneTargets(retargetingLayer, isFullBody, boneTargets);
            }

            if (ShouldCorrectFingers(animatorComp, restPoseObjectHumanoid))
            {
                foreach (var retargetingProcessor in retargetingLayer.RetargetingProcessors)
                {
                    var correctBones = retargetingProcessor as RetargetingProcessorCorrectBones;
                    if (correctBones != null)
                    {
                        correctBones.FingerPositionCorrectionWeight = 1.0f;
                    }
                }
            }

            // Update bone pair mappings.
            retargetingLayer.UpdateBonePairMappings();

            // Add joint adjustments.
            AddComponentsHelper.AddJointAdjustments(animatorComp, retargetingLayer, restPoseObjectHumanoid);

#if UNITY_EDITOR
            if (!runtimeInvocation)
            {
                UnityEditor.EditorUtility.SetDirty(animatorComp);
            }
#endif

            activeGameObject.transform.SetPositionAndRotation(
                previousPositionAndRotation.translation, previousPositionAndRotation.rotation);
#if UNITY_EDITOR
            if (!runtimeInvocation)
            {
                UnityEditor.Undo.SetCurrentGroupName("Setup Animation Rigging Retargeting");
            }
#endif
        }

        private static FullBodyDeformationConstraint CreateOrGetDeformationConstraint(
            GameObject rigObject,
            bool runtimeInvocation)
        {
            FullBodyDeformationConstraint deformationConstraint =
                rigObject.GetComponentInChildren<FullBodyDeformationConstraint>(true);
            if (deformationConstraint == null)
            {
                var deformationConstraintObject = new GameObject("Deformation");
                deformationConstraint =
                    deformationConstraintObject.AddComponent<FullBodyDeformationConstraint>();

#if UNITY_EDITOR
                if (runtimeInvocation)
                {
                    deformationConstraint.transform.SetParent(rigObject.transform);
                }
                else
                {
                    UnityEditor.Undo.RegisterCreatedObjectUndo(deformationConstraintObject, "Create Deformation");

                    UnityEditor.Undo.SetTransformParent(deformationConstraintObject.transform, rigObject.transform,
                        $"Add Deformation Constraint to Rig");
                    UnityEditor.Undo.RegisterCompleteObjectUndo(deformationConstraintObject,
                        $"Deformation Constraint Transform Init");
                }
#else
                deformationConstraint.transform.SetParent(rigObject.transform);
#endif
                deformationConstraintObject.transform.localPosition = Vector3.zero;
                deformationConstraintObject.transform.localRotation = Quaternion.identity;
                deformationConstraintObject.transform.localScale = Vector3.one;
            }
            return deformationConstraint;
        }

        private static FullBodyDeformationConstraint AddDeformationConstraint(
            GameObject rigObject,
            Animator animator,
            BoneTarget[] boneTargets,
            RestPoseObjectHumanoid restPoseObjectHumanoid,
            bool isFullBody,
            bool runtimeInvocation)
        {
            var deformationConstraint =
                rigObject.GetComponentInChildren<FullBodyDeformationConstraint>(true);
            if (deformationConstraint == null)
            {
                deformationConstraint = CreateOrGetDeformationConstraint(rigObject, runtimeInvocation);
            }

            var deformationConstraintObject = deformationConstraint.gameObject;
            foreach (var boneTarget in boneTargets)
            {
                if (boneTarget.Target == null)
                {
                    continue;
                }
#if UNITY_EDITOR
                if (!runtimeInvocation)
                {
                    UnityEditor.Undo.SetTransformParent(boneTarget.Target, deformationConstraintObject.transform,
                        $"Parent Bone Target {boneTarget.Target.name} to Deformation.");
                    UnityEditor.Undo.RegisterCompleteObjectUndo(boneTarget.Target,
                        $"Bone Target {boneTarget.Target.name} Init");
                }
#endif
            }

            deformationConstraint.data.DeformationBodyTypeField = isFullBody ?
                FullBodyDeformationData.DeformationBodyType.FullBody :
                FullBodyDeformationData.DeformationBodyType.UpperBody;
            deformationConstraint.data.SpineTranslationCorrectionTypeField =
                FullBodyDeformationData.SpineTranslationCorrectionType.AccurateHipsAndHead;
            deformationConstraint.data.SpineLowerAlignmentWeight = 0.5f;
            deformationConstraint.data.SpineUpperAlignmentWeight = 1.0f;
            deformationConstraint.data.ChestAlignmentWeight = 0.0f;
            deformationConstraint.data.ShoulderRollWeight = 1.0f;
            deformationConstraint.data.LeftShoulderWeight = 1.0f;
            deformationConstraint.data.RightShoulderWeight = 1.0f;
            deformationConstraint.data.LeftArmWeight = 1.0f;
            deformationConstraint.data.RightArmWeight = 1.0f;
            deformationConstraint.data.LeftHandWeight = 1.0f;
            deformationConstraint.data.RightHandWeight = 1.0f;
            deformationConstraint.data.AlignLeftLegWeight = 1.0f;
            deformationConstraint.data.AlignRightLegWeight = 1.0f;
            deformationConstraint.data.LeftToesWeight = 1.0f;
            deformationConstraint.data.RightToesWeight = 1.0f;
            deformationConstraint.data.AlignFeetWeight = 0.75f;
            deformationConstraint.data.SquashLimit = 2.0f;
            deformationConstraint.data.StretchLimit = 2.0f;
            deformationConstraint.data.OriginalSpinePositionsWeight = 0.5f;
            deformationConstraint.data.OriginalSpineBoneCount = 0;
            deformationConstraint.data.OriginalSpineUseHipsToHeadToScale = true;
            deformationConstraint.data.OriginalSpineFixRotations = true;

            deformationConstraint.data.AssignAnimator(animator);
            deformationConstraint.data.SetUpLeftArmData();
            deformationConstraint.data.SetUpRightArmData();
            deformationConstraint.data.SetUpLeftLegData();
            deformationConstraint.data.SetUpRightLegData();
            deformationConstraint.data.SetUpHipsAndHeadBones();
            deformationConstraint.data.SetUpBonePairs();
            deformationConstraint.data.SetUpBoneTargets(deformationConstraint.transform);
            deformationConstraint.data.SetUpAdjustments(restPoseObjectHumanoid);
            deformationConstraint.data.InitializeStartingScale();

#if UNITY_EDITOR
            if (!runtimeInvocation)
            {
                UnityEditor.PrefabUtility.RecordPrefabInstancePropertyModifications(deformationConstraint);
            }
#endif
            return deformationConstraint;
        }

        private static bool ShouldCorrectFingers(Animator animator, RestPoseObjectHumanoid restPoseObjectHumanoid)
        {
            var hand = HumanBodyBones.LeftHand;
            var fingers = new[]
            {
                HumanBodyBones.LeftThumbDistal,
                HumanBodyBones.LeftIndexDistal,
                HumanBodyBones.LeftMiddleDistal,
                HumanBodyBones.LeftRingDistal,
                HumanBodyBones.LeftLittleDistal
            };
            var approximateSourceHandSize = 0.0f;
            var approximateTargetHandSize = 0.0f;
            var sourceWristBonePosition = restPoseObjectHumanoid.GetBonePoseData(hand).WorldPose.position;
            var targetWristBonePosition = animator.GetBoneTransform(hand).position;
            var validFingers = 0;
            foreach (var finger in fingers)
            {
                var fingerBone = animator.GetBoneTransform(finger);
                if (fingerBone != null)
                {
                    approximateSourceHandSize += Vector3.Distance(sourceWristBonePosition,
                        restPoseObjectHumanoid.GetBonePoseData(finger).WorldPose.position);
                    approximateTargetHandSize += Vector3.Distance(targetWristBonePosition, fingerBone.position);
                    validFingers++;
                }
            }

            // If no fingers to check against, we don't want finger positional accuracy.
            if (validFingers == 0)
            {
                return false;
            }
            approximateSourceHandSize /= validFingers;
            approximateTargetHandSize /= validFingers;

            // Check if the sizes are within 10% of each other.
            var threshold = 0.1f;
            var maxDifference = Mathf.Max(approximateSourceHandSize, approximateTargetHandSize) * threshold;
            var difference = Mathf.Abs(approximateSourceHandSize - approximateTargetHandSize);
            return difference <= maxDifference;
        }
    }
}
