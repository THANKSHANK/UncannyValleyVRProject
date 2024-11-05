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

using System;
using System.Diagnostics;
using Meta.XR.Simulator.Editor;
using UnityEditor;
using static Meta.XR.Simulator.ProcessPort;

#if META_XR_SDK_CORE_SUPPORTS_TOOLBAR
using Meta.XR.Editor.PlayCompanion;
using Meta.XR.Editor.StatusMenu;
using Styles = Meta.XR.Editor.PlayCompanion.Styles;
#if !UNITY_EDITOR_OSX
using Meta.XR.Simulator.Editor.SyntheticEnvironments;
#endif
#endif

namespace Meta.XR.Simulator
{
    [InitializeOnLoad]
    internal static class Utils
    {
        public const string PublicName = "Meta XR Simulator";
        public const string MenuPath = "Meta/" + PublicName;
        public const string PackageName = "com.meta.xr.simulator";
        public const string PackagePath = "Packages/" + PackageName;

        private const string ToolbarItemTooltip =
#if UNITY_2022_2_OR_NEWER
            "Set Play mode to use Meta XR Simulator\n<i>Simulates Meta Quest headset and features on desktop</i>";
#else
            "Set Play mode to use Meta XR Simulator\nSimulates Meta Quest headset and features on desktop";
#endif

        static Utils()
        {
#if META_XR_SDK_CORE_SUPPORTS_TOOLBAR
            var statusMenuItem = new Meta.XR.Editor.StatusMenu.Item()
            {
                Name = PublicName,
                Color = Meta.XR.Editor.UserInterface.Styles.Colors.Meta,
                Icon = Styles.Contents.MetaXRSimulator,
#if META_XR_SDK_CORE_68_OR_NEWER
                PillIcon = () =>
                    Enabler.Activated
                        ? (Meta.XR.Editor.UserInterface.Styles.Contents.CheckIcon,
                            Meta.XR.Editor.UserInterface.Styles.Colors.Meta,
                            false)
                        : (null, null, false),
#else
                PillIcon = () =>
                    Enabler.Activated
                        ? (Meta.XR.Editor.UserInterface.Styles.Contents.CheckIcon,
                            Meta.XR.Editor.UserInterface.Styles.Colors.Meta)
                        : (null, null),
#endif
                InfoTextDelegate = () => (Enabler.Activated ? "Activated" : "Deactivated", null),
                OnClickDelegate = origin => Enabler.ToggleSimulator(true, origin.ToString().ToSimulatorOrigin()),
                Order = 4,
                CloseOnClick = false
            };
            StatusMenu.RegisterItem(statusMenuItem);

            var xrSimulatorItem = new Meta.XR.Editor.PlayCompanion.Item()
            {
                Order = 10,
                Name = PublicName,
                Tooltip = ToolbarItemTooltip,
                Icon = Styles.Contents.MetaXRSimulator,
                Color = Meta.XR.Editor.UserInterface.Styles.Colors.Meta,
                Show = true,
                ShouldBeSelected = () => Enabler.Activated,
                ShouldBeUnselected = () => !Enabler.Activated,
                OnSelect = () => { Enabler.ActivateSimulator(true, Origins.Toolbar); },
                OnUnselect = () =>
                {
                    Enabler.DeactivateSimulator(true, Origins.Toolbar);
#if !UNITY_EDITOR_OSX
                    if (Settings.AutomaticServers)
                    {
                        SyntheticEnvironmentServer.Stop();
                    }
#endif
                },
                OnEnteringPlayMode = () =>
                {
#if !UNITY_EDITOR_OSX
                    if (Settings.AutomaticServers)
                    {
                        Registry.GetByInternalName(Settings.LastEnvironment)?.Launch(stopExisting: false);
                    }
#endif
                },
                OnExitingPlayMode = () =>
                {
#if !UNITY_EDITOR_OSX
                    if (Settings.AutomaticServers)
                    {
                        SyntheticEnvironmentServer.Stop();
                    }
#endif
                }
            };
            Manager.RegisterItem(xrSimulatorItem);
#endif
        }

        public enum Origins
        {
            Unknown = -1,
            Settings,
            Menu,
            StatusMenu,
            Console,
            Component,
            Toolbar
        }

        public static Origins ToSimulatorOrigin(this string origin)
        {
            Enum.TryParse(origin, out Origins simulatorOrigin);
            return simulatorOrigin;
        }

        public static void ReportInfo(string title, string body)
        {
            UnityEngine.Debug.Log($"[{title}] {body}");
        }

        public static void ReportError(string title, string body)
        {
            UnityEngine.Debug.LogError($"[{title}] {body}");
        }

        public static void DisplayDialogOrError(string title, string body, bool forceHideDialog = false)
        {
            if (!forceHideDialog && !Enabler.UnityRunningInBatchmode)
            {
                EditorUtility.DisplayDialog(title, body, "Ok");
            }
            else
            {
                ReportError(title, body);
            }
        }

        public static ProcessPort GetProcessStatusFromPort(string port)
        {
            var existingPorts = GetProcessesByPort(port);
            return existingPorts.Count > 0 ? existingPorts[0] : null;
        }

        public static void LaunchProcess(string binaryPath, string arguments, string logContext)
        {
            ReportInfo(logContext, "Launching " + binaryPath);
            var sesProcess = new Process();
            sesProcess.StartInfo.FileName = binaryPath;
            sesProcess.StartInfo.Arguments = arguments;
            if (!sesProcess.Start())
            {
                DisplayDialogOrError(logContext, "failed to launch " + binaryPath);
            }
        }

        public static void StopProcess(string processPort, string logContext)
        {
            var existingProcess = GetProcessStatusFromPort(processPort);
            if (existingProcess == null)
            {
                return;
            }

            ReportInfo(logContext, "Stopping " + existingProcess);

            var p = Process.GetProcessById(existingProcess.processId);
            p.Kill();
            p.WaitForExit();
        }
    }
}
