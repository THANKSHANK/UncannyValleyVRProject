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

using Oculus.Interaction.Input;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

namespace Oculus.Interaction.Hands.Editor
{
    [CustomEditor(typeof(HandVisual))]
    public class HandVisualEditor : UnityEditor.Editor
    {
        private SerializedProperty _handProperty;
        private SerializedProperty _rootProperty;

        private IHand Hand => _handProperty.objectReferenceValue as IHand;

        private void OnEnable()
        {
            _handProperty = serializedObject.FindProperty("_hand");
            _rootProperty = serializedObject.FindProperty("_root");
        }

        public override void OnInspectorGUI()
        {
            DrawPropertiesExcluding(serializedObject);
            serializedObject.ApplyModifiedProperties();

            HandVisual visual = (HandVisual)target;
            InitializeSkeleton(visual);

            if (Hand == null)
            {
                return;
            }

            if (GUILayout.Button("Auto Map Joints"))
            {
                AutoMapJoints(visual);
                EditorUtility.SetDirty(visual);
                EditorSceneManager.MarkSceneDirty(visual.gameObject.scene);
            }

            EditorGUILayout.LabelField("Joints", EditorStyles.boldLabel);
            for (int i = (int)HandJointId.HandStart; i < (int)HandJointId.HandEnd; ++i)
            {
                string jointName = ((HandJointId)i).ToString();
                visual.Joints[i] = (Transform)EditorGUILayout.ObjectField(jointName,
                    visual.Joints[i], typeof(Transform), true);
            }
        }

        private void InitializeSkeleton(HandVisual visual)
        {
            HandJointsAutoPopulatorHelper.InitializeCollection(visual.Joints);
        }

        private void AutoMapJoints(HandVisual visual)
        {
            if (Hand == null)
            {
                InitializeSkeleton(visual);
                return;
            }

            Transform rootTransform = visual.transform;
            if (_rootProperty.objectReferenceValue is Transform customRoot)
            {
                rootTransform = customRoot;
            }
            HandJointsAutoPopulatorHelper.AutoMapJoints(visual.Joints, rootTransform);
        }
    }
}
