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
    [CustomEditor(typeof(FromHandPrefabDataSource))]
    public class FromHandPrefabDataSourceEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            DrawPropertiesExcluding(serializedObject);
            serializedObject.ApplyModifiedProperties();

            FromHandPrefabDataSource source = (FromHandPrefabDataSource)target;
            InitializeSkeleton(source);

            if (GUILayout.Button("Auto Map Joints"))
            {
                AutoMapJoints(source);
                EditorUtility.SetDirty(source);
                EditorSceneManager.MarkSceneDirty(source.gameObject.scene);
            }

            EditorGUILayout.LabelField("Joints", EditorStyles.boldLabel);
            for (int i = (int)HandJointId.HandStart; i < (int)HandJointId.HandEnd; ++i)
            {
                string jointName = ((HandJointId)i).ToString();
                source.JointTransforms[i] = (Transform)EditorGUILayout.ObjectField(jointName,
                    source.JointTransforms[i], typeof(Transform), true);
            }
        }

        private void InitializeSkeleton(FromHandPrefabDataSource source)
        {
            HandJointsAutoPopulatorHelper.InitializeCollection(source.JointTransforms);
        }

        private void AutoMapJoints(FromHandPrefabDataSource source)
        {
            Transform rootTransform = source.transform;
            HandJointsAutoPopulatorHelper.AutoMapJoints(source.JointTransforms, rootTransform);
        }

    }
}
