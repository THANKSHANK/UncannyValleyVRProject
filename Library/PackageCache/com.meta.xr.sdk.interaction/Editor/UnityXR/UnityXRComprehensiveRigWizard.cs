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

#nullable enable
using UnityEditor;
using UnityEngine;
using Oculus.Interaction.Locomotion;
using Oculus.Interaction.Editor.QuickActions;
using Unity.XR.CoreUtils;

namespace Oculus.Interaction.Editor.UnityXR.QuickActions
{
    internal class UnityXRComprehensiveRigWizard
    {
        private const string MENU_NAME_ADD_NEW_RIG = QuickActionsWizard.MENU_FOLDER +
            "Add UnityXR Interaction Rig";

        public static readonly Template UnityXRCameraRigInteraction =
            new Template(
                "UnityXRCameraRigInteraction",
                "ce61dc20b15eeff4e9712e79d49d16ad");

        [MenuItem(MENU_NAME_ADD_NEW_RIG, priority = MenuOrder.COMPREHENSIVE_RIG_NEW)]
        public static GameObject CreateNewRig()
        {
            GameObject createdRig = Templates.CreateFromTemplate(
                null, UnityXRCameraRigInteraction, asPrefab: true);
            Selection.activeObject = createdRig;

            return createdRig;
        }

        [MenuItem(MENU_NAME_ADD_NEW_RIG, true)]
        public static bool ValidateCreateNewRig()
        {
            // If no Camera Rig exists, add the UnityXRCameraRigInteraction prefab
            return FindExistingRig() == null;
        }

        private static XROrigin? FindExistingRig()
        {
            return Object.FindObjectOfType<XROrigin>();
        }
    }
}
