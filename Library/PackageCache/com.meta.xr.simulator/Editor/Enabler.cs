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
using System.IO;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;
using static Meta.XR.Simulator.Utils;
using Menu = UnityEditor.Menu;

namespace Meta.XR.Simulator.Editor
{
    /// <summary>
    /// Static Helper that controls activation and deactivation of Meta XR Simulator.
    /// </summary>
    /// <seealso cref="Activated"/>
    /// <seealso cref="ActivateSimulator"/>
    /// <seealso cref="DeactivateSimulator"/>
    /// <seealso cref="ToggleSimulator"/>
    [InitializeOnLoad]
    public static class Enabler
    {
        private const string OpenXrRuntimeEnvKey = "XR_RUNTIME_JSON";
        private const string PreviousOpenXrRuntimeEnvKey = "XR_RUNTIME_JSON_PREV";
        private const string XrSimConfigEnvKey = "META_XRSIM_CONFIG_JSON";
        private const string PreviousXrSimConfigEnvKey = "META_XRSIM_CONFIG_JSON_PREV";
        private const string ProjectTelemetryId = "META_PROJECT_TELEMETRY_ID";
        private const string ActivateSimulatorMenuPath = MenuPath + "/Activate";
        private const string DeactivateSimulatorMenuPath = MenuPath + "/Deactivate";

#if UNITY_EDITOR_OSX
        private const string OpenMacOSGuideMenuPath = MenuPath + "/Open Guide for macOS";

        private static readonly string SystemJsonPath = "/usr/local/share/openxr/1/active_runtime.json";
        private static readonly string MacGuideUrl = "https://github.com/Oculus-VR/homebrew-repo/blob/main/meta-xr-simulator.md";
#else
        private static readonly string JsonPath =
            Path.GetFullPath(PackagePath + "/MetaXRSimulator/meta_openxr_simulator.json");

        private static readonly string DllPath = Path.GetFullPath(PackagePath + "/MetaXRSimulator/SIMULATOR.dll");

        private static string ConfigPath => Path.GetFullPath(PackagePath + (UnityRunningInBatchmode
            ? "/MetaXRSimulator/config/sim_core_configuration_ci.json"
            : "/MetaXRSimulator/config/sim_core_configuration.json"));
#endif

        internal static bool UnityRunningInBatchmode = false;

        /// <summary>
        /// Whether or not Meta XR Simulator is Activated.
        /// </summary>
        public static bool Activated => HasSimulatorInstalled() && IsSimulatorActivated();

        static Enabler()
        {
            if (Environment.CommandLine.Contains("-batchmode"))
            {
                UnityRunningInBatchmode = true;
            }
        }

        private static bool HasSimulatorInstalled()
        {
#if UNITY_EDITOR_OSX
            bool result = false;
            if (File.Exists(SystemJsonPath)) {
                // Use regular expression to find if the runtime name is Meta XR Simulator
                try
                {
                    string content = File.ReadAllText(SystemJsonPath);

                    Regex regex = new Regex(@"""name""\s*:\s*""(.*?)""");
                    Match match = regex.Match(content);

                    if (match.Success)
                    {
                        string name = match.Groups[1].Value;
                        if (name.Contains("Meta OpenXR Simulator") || name.Contains("Meta XR Simulator"))
                        {
                            result = true;
                        }
                    }
                }
                catch(Exception)
                {
                    // While active_runtime.json under /usr/local/share/openxr/1/ is usually a symbol link,
                    // the file that it points to can be deleted while active_runtime.json still exists. We need to
                    // catch the exception and treat it the same way as no OpenXR runtime is installed.
                }
            }
            return result;
#else
            return (!string.IsNullOrEmpty(JsonPath) &&
                    !string.IsNullOrEmpty(DllPath) &&
                    File.Exists(JsonPath) &&
                    File.Exists(DllPath));
#endif
        }

        private static bool IsSimulatorActivated()
        {
#if UNITY_EDITOR_OSX
            return HasSimulatorInstalled();
#else
            return Environment.GetEnvironmentVariable(OpenXrRuntimeEnvKey) == JsonPath;
#endif
        }

        [MenuItem(ActivateSimulatorMenuPath, true, 0)]
        private static bool ValidateSimulatorActivated()
        {
            Menu.SetChecked(ActivateSimulatorMenuPath, Activated);
            return true;
        }

        [MenuItem(ActivateSimulatorMenuPath, false, 0)]
        private static void ActivateSimulatorMenuItem()
        {
            ActivateSimulator(false, Origins.Menu);
        }

        /// <summary>
        /// Toggle Activated state of Meta XR Simulator
        /// </summary>
        /// <param name="forceHideDialog">Forces any error dialog triggered by this method to be hidden.</param>
        public static void ToggleSimulator(bool forceHideDialog)
        {
            ToggleSimulator(forceHideDialog, Origins.Unknown);
        }

        internal static void ToggleSimulator(bool forceHideDialog, Origins origin)
        {
            if (HasSimulatorInstalled() && IsSimulatorActivated())
            {
                DeactivateSimulator(forceHideDialog, origin);
            }
            else
            {
                ActivateSimulator(forceHideDialog, origin);
            }
        }

        /// <summary>
        /// Activates Meta XR Simulator
        /// </summary>
        /// <param name="forceHideDialog">Forces any error dialog triggered by this method to be hidden.</param>
        public static void ActivateSimulator(bool forceHideDialog)
        {
            ActivateSimulator(forceHideDialog, Origins.Unknown);
        }

        internal static void ActivateSimulator(bool forceHideDialog, Origins origin)
        {
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
            using var marker = new OVRTelemetryMarker(OVRTelemetryConstants.XRSim.MarkerId.ToggleState);
            marker.AddAnnotation(OVRTelemetryConstants.XRSim.AnnotationType.IsActive, true.ToString());
#if META_XR_SDK_CORE_SUPPORTS_TOOLBAR
            marker.AddAnnotation(OVRTelemetryConstants.Editor.AnnotationType.Origin, origin.ToString());
#endif
#endif

            if (!HasSimulatorInstalled())
            {
#if UNITY_EDITOR_OSX
                if (EditorUtility.DisplayDialog("Meta XR Simulator", "Meta XR Simulator is a lightweight OpenXR runtime that allows you to iterate your OpenXR project on Mac without a headset.\n\nIt can be installed through Homnebrew and is compatible with Unity OpenXR Plugin.\n\nClick 'More Info' button to find more information.", "More Info", "Cancel"))
                {
                    UnityEngine.Debug.LogFormat("Open Meta XR Simulator URL: {0}", MacGuideUrl);
                    Application.OpenURL(MacGuideUrl);
                }
#else
                DisplayDialogOrError("Meta XR Simulator Not Found",
                    "SIMULATOR.json is not found. Please enable OVRPlugin through Meta/Tools/OVR Utilities Plugin/Set OVRPlugin To OpenXR",
                    forceHideDialog);
#endif
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
                marker.SetResult(OVRPlugin.Qpl.ResultType.Fail);
#endif
                return;
            }

            if (IsSimulatorActivated())
            {
                ReportInfo("Meta XR Simulator", "Meta XR Simulator is already activated.");
                return;
            }

#if UNITY_EDITOR_OSX
            // on Mac, we don't need to set environment variables as XrSim is the default runtime
            return;
#else
            Environment.SetEnvironmentVariable(PreviousOpenXrRuntimeEnvKey,
                Environment.GetEnvironmentVariable(OpenXrRuntimeEnvKey));
            Environment.SetEnvironmentVariable(OpenXrRuntimeEnvKey, JsonPath);

            Environment.SetEnvironmentVariable(PreviousXrSimConfigEnvKey,
                Environment.GetEnvironmentVariable(XrSimConfigEnvKey));
            Environment.SetEnvironmentVariable(XrSimConfigEnvKey, ConfigPath);

#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
            var runtimeSettings = OVRRuntimeSettings.GetRuntimeSettings();
            if (runtimeSettings != null)
            {
                Environment.SetEnvironmentVariable(ProjectTelemetryId, runtimeSettings.TelemetryProjectGuid);
            }
#endif

            ReportInfo("Meta XR Simulator is activated",
                $"{OpenXrRuntimeEnvKey} is set to {Environment.GetEnvironmentVariable(OpenXrRuntimeEnvKey)}\n{XrSimConfigEnvKey} is set to {Environment.GetEnvironmentVariable(XrSimConfigEnvKey)}");
#endif
        }

        [MenuItem(DeactivateSimulatorMenuPath, true, 1)]
        private static bool ValidateSimulatorDeactivated()
        {
            Menu.SetChecked(DeactivateSimulatorMenuPath, !Activated);
#if UNITY_EDITOR_OSX
            return false;
#else
            return true;
#endif
        }

        [MenuItem(DeactivateSimulatorMenuPath, false, 1)]
        private static void DeactivateSimulatorMenuItem()
        {
            DeactivateSimulator(false, Origins.Menu);
        }

        /// <summary>
        /// Deactivates Meta XR Simulator
        /// </summary>
        /// <param name="forceHideDialog">Forces any error dialog triggered by this method to be hidden.</param>
        public static void DeactivateSimulator(bool forceHideDialog)
        {
            DeactivateSimulator(forceHideDialog, Origins.Unknown);
        }

        internal static void DeactivateSimulator(bool forceHideDialog, Origins origin)
        {
#if UNITY_EDITOR_OSX
            // on Mac, we don't need to reset environment variables as XrSim is always the default runtime,
            // and open the guide doc instead if the origin is the Toolbar button.
            if (origin == Origins.Toolbar)
            {
                Application.OpenURL(MacGuideUrl);
            }
            return;
#else
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
            using var marker = new OVRTelemetryMarker(OVRTelemetryConstants.XRSim.MarkerId.ToggleState);
            marker.AddAnnotation(OVRTelemetryConstants.XRSim.AnnotationType.IsActive, false.ToString());
#if META_XR_SDK_CORE_SUPPORTS_TOOLBAR
            marker.AddAnnotation(OVRTelemetryConstants.Editor.AnnotationType.Origin, origin.ToString());
#endif
#endif

            if (!HasSimulatorInstalled())
            {
                DisplayDialogOrError("Meta XR Simulator",
                    $"{JsonPath} is not found. Please enable OVRPlugin through Meta/Tools/OVR Utilities Plugin/Set OVRPlugin To OpenXR",
                    forceHideDialog);
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
                marker.SetResult(OVRPlugin.Qpl.ResultType.Fail);
#endif
            }

            if (!IsSimulatorActivated())
            {
                ReportInfo("Meta XR Simulator", "Meta XR Simulator is not activated.");
#if META_XR_SDK_CORE_SUPPORTS_TELEMETRY
                marker.SetResult(OVRPlugin.Qpl.ResultType.Fail);
#endif
                return;
            }

            Environment.SetEnvironmentVariable(OpenXrRuntimeEnvKey,
                Environment.GetEnvironmentVariable(PreviousOpenXrRuntimeEnvKey));
            Environment.SetEnvironmentVariable(PreviousOpenXrRuntimeEnvKey, "");

            Environment.SetEnvironmentVariable(XrSimConfigEnvKey,
                Environment.GetEnvironmentVariable(PreviousXrSimConfigEnvKey));
            Environment.SetEnvironmentVariable(PreviousXrSimConfigEnvKey, "");

            ReportInfo("Meta XR Simulator is deactivated",
                $"{OpenXrRuntimeEnvKey} is set to {Environment.GetEnvironmentVariable(OpenXrRuntimeEnvKey)}\n{XrSimConfigEnvKey} is set to {Environment.GetEnvironmentVariable(XrSimConfigEnvKey)}");
#endif
        }

#if UNITY_EDITOR_OSX
        [MenuItem(OpenMacOSGuideMenuPath, false, 2000)]
        private static void OpenMacOSGuideMenuItem()
        {
            Application.OpenURL(MacGuideUrl);
        }
#endif

    }
}
