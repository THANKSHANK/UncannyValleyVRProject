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

using System.IO;
using UnityEditor;
using static Meta.XR.Simulator.Utils;

#if !UNITY_EDITOR_OSX // We don't support running SyntheticEnvironmentServer from menu on MacOS

namespace Meta.XR.Simulator.Editor.SyntheticEnvironments
{
    internal static class SyntheticEnvironmentServer
    {
        private const string Name = "Synthetic Environment Server";
        public const string MenuPath = Utils.MenuPath + "/" + Name;
        private const string Port = "33792";

        public static void Start(string environmentName, string binaryPath, bool stopExisting = true)
        {
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
            using var marker = new OVRTelemetryMarker(OVRTelemetryConstants.XRSim.MarkerId.SESInteraction);
            marker.AddAnnotation(OVRTelemetryConstants.XRSim.AnnotationType.Action, environmentName);
#endif

            ReportInfo(Name, "Launching " + environmentName);

            if (!File.Exists(binaryPath))
            {
                DisplayDialogOrError(Name, "failed to find " + binaryPath);
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
                marker.SetResult(OVRPlugin.Qpl.ResultType.Fail);
#endif
                return;
            }

            var existingProcess = GetProcessStatusFromPort(Port);
            if (existingProcess != null)
            {
                if (!stopExisting) return;

                var replace = EditorUtility.DisplayDialog(
                    Name,
                    "A synthetic environment server is already running. " +
                    "Do you want to terminate it before opening the new scene?",
                    "Yes", "No");
                if (!replace)
                {
                    return;
                }

                Stop();
            }


            // launch the binary
            Settings.LastEnvironment = environmentName;
            LaunchProcess(binaryPath, environmentName, Name);
        }

        [MenuItem(MenuPath + "/Stop Server")]
        public static void Stop()
        {
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
            using var marker = new OVRTelemetryMarker(OVRTelemetryConstants.XRSim.MarkerId.SESInteraction);
            marker.AddAnnotation(OVRTelemetryConstants.XRSim.AnnotationType.Action, "stop");
#endif

            StopProcess(Port, Name);

            // This will also stop the LocalSharingServer
            LocalSharingServer.Stop();
        }
    }
}

#endif // !UNITY_EDITOR_OSX
