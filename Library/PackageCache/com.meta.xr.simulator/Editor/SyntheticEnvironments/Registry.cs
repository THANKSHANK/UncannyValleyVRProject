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

using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using static Meta.XR.Simulator.Utils;

#if !UNITY_EDITOR_OSX // We don't support running SyntheticEnvironmentServer from menu on MacOS

namespace Meta.XR.Simulator.Editor.SyntheticEnvironments
{
    /// <summary>
    /// Registry of available <see cref="SyntheticEnvironment"/>s.
    /// </summary>
    /// <remarks>Call <see cref="Register"/> to add additional <see cref="SyntheticEnvironment"/>s
    /// to this registry.</remarks>
    /// <seealso cref="Register"/>
    /// <seealso cref="SyntheticEnvironment"/>
    [InitializeOnLoad]
    public static class Registry
    {
        private const string DefaultExecutablePath = "/MetaXRSimulator/.synth_env_server/synth_env_server.exe";
        private static string DefaultFullPath => Path.GetFullPath(PackagePath + DefaultExecutablePath);

        private const string ExtraExecutablePath = "/MetaXRSimulator/ses_rooms~/synth_env_server_extra_rooms.exe";
        private static string ExtraFullPath => Path.GetFullPath(PackagePath + ExtraExecutablePath);

        internal static string[] Names;
        internal static readonly List<SyntheticEnvironment> RegisteredEnvironments = new();
        private static bool _dirtyRegistry = true;

        /// <summary>
        /// Get a registered <see cref="SyntheticEnvironment"/> from its public name.
        /// </summary>
        /// <param name="name">The public name (shown in settings) of the <see cref="SyntheticEnvironment"/></param>
        /// <returns>The <see cref="SyntheticEnvironment"/> matching the name, or <code>null</code></returns>
        public static SyntheticEnvironment GetByName(string name)
            => RegisteredEnvironments.FirstOrDefault(environment => environment.Name == name);

        /// <summary>
        /// Get a registered <see cref="SyntheticEnvironment"/> from its internal name.
        /// </summary>
        /// <param name="internalName">The internal name (shown in settings) of the <see cref="SyntheticEnvironment"/></param>
        /// <returns>The <see cref="SyntheticEnvironment"/> matching the name, or <code>null</code></returns>
        public static SyntheticEnvironment GetByInternalName(string internalName)
            => RegisteredEnvironments.FirstOrDefault(room => room.InternalName == internalName);

        internal static SyntheticEnvironment GetByIndex(int index)
            => RegisteredEnvironments.ElementAt(index);

        /// <summary>
        /// Registers a <see cref="SyntheticEnvironment"/> to the registry.
        /// This will make it available in the settings.
        /// </summary>
        /// <param name="environment">The <see cref="SyntheticEnvironment"/> to register.</param>
        public static void Register(SyntheticEnvironment environment)
        {
            RegisteredEnvironments.Add(environment);
            _dirtyRegistry = true;
        }

        internal static void RefreshNames()
        {
            if (!_dirtyRegistry) return;

            Names = RegisteredEnvironments.Select(environment => environment.Name).ToArray();
        }

        static Registry()
        {
            Register(new SyntheticEnvironment()
            {
                Name = "Living Room",
                InternalName = "LivingRoom",
                ServerBinaryPath = DefaultFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Game Room",
                InternalName = "GameRoom",
                ServerBinaryPath = DefaultFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Bedroom",
                InternalName = "Bedroom",
                ServerBinaryPath = DefaultFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Room with Staircase",
                InternalName = "XRoom1_1",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Office",
                InternalName = "XRoom1_2",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Trapezoidal Room",
                InternalName = "XRoom1_4",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Corridor",
                InternalName = "XRoom2_3",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Furniture-filled Room",
                InternalName = "XRoom2_4",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "Living Room with Multiple Spaces",
                InternalName = "XRoom3_1",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "L-shape Room",
                InternalName = "XRoom5_1",
                ServerBinaryPath = ExtraFullPath
            });
            Register(new SyntheticEnvironment()
            {
                Name = "High-ceiling Room",
                InternalName = "XRoom5_6",
                ServerBinaryPath = ExtraFullPath
            });
        }

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/Launch Game Room")]
        private static void LaunchGameRoom() => GetByInternalName("GameRoom").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/Launch Living Room")]
        private static void LaunchLivingRoom() => GetByInternalName("LivingRoom").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/Launch Bedroom")]
        private static void LaunchBedroom() => GetByInternalName("Bedroom").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/Room with Staircase")]
        private static void LaunchXRoom1_1() => GetByInternalName("XRoom1_1").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/Office")]
        private static void LaunchXRoom1_2() => GetByInternalName("XRoom1_2").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/Trapezoidal Room")]
        private static void LaunchXRoom1_4() => GetByInternalName("XRoom1_4").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/Corridor")]
        private static void LaunchXRoom2_3() => GetByInternalName("XRoom2_3").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/Furniture-filled Room")]
        private static void LaunchXRoom2_4() => GetByInternalName("XRoom2_4").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/Living Room with Multiple Spaces")]
        private static void LaunchXRoom3_1() => GetByInternalName("XRoom3_1").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/L-shape Room")]
        private static void LaunchXRoom5_1() => GetByInternalName("XRoom5_1").Launch();

        [MenuItem(SyntheticEnvironmentServer.MenuPath + "/More Environments/High-ceiling Room")]
        private static void LaunchXRoom5_5() => GetByInternalName("XRoom5_6").Launch();
    }
}

#endif
