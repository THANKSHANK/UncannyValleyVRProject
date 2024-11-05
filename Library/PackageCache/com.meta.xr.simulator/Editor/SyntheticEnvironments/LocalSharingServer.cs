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

#if !UNITY_EDITOR_OSX // We don't support running LocalSharingServer from menu on MacOS

namespace Meta.XR.Simulator.Editor.SyntheticEnvironments
{
    internal static class LocalSharingServer
    {
        private const string Name = "Local Sharing Server";
        private const string MenuPath = Utils.MenuPath + "/" + Name;
        private const string Port = "33793";

        private static readonly string FullPath =
            Path.GetFullPath(PackagePath + "/MetaXRSimulator/.local_sharing_server/local_sharing_server.exe");

        [MenuItem(MenuPath + "/Launch Sharing Server")]
        private static void StartFromMenu()
        {
            Start();
        }

        public static void Start(bool stopExisting = true)
        {
            ReportInfo(Name, "Launching local sharing server");

            var binaryPath = FullPath;
            if (!File.Exists(binaryPath))
            {
                DisplayDialogOrError(Name, "failed to find " + binaryPath);
                return;
            }

            // Always force restart LSS
            var existingProcess = GetProcessStatusFromPort(Port);
            if (existingProcess != null)
            {
                if (!stopExisting) return;

                Stop();
            }

            // launch the binary
            LaunchProcess(binaryPath, "", Name);
        }

        [MenuItem(MenuPath + "/Stop Sharing Server")]
        public static void Stop()
        {
            StopProcess(Port, Name);
        }
    }
}

#endif // !UNITY_EDITOR_OSX
