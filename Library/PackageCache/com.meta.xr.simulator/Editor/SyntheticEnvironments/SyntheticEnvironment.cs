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

#if !UNITY_EDITOR_OSX // We don't support running SyntheticEnvironmentServer from menu on MacOS

namespace Meta.XR.Simulator.Editor.SyntheticEnvironments
{
    /// <summary>
    /// Describes an instance of a Synthetic Environment,
    /// Technically, an argument passed to a Synthetic Environment Server.
    /// </summary>
    /// <remarks>
    /// Call <see cref="Meta.XR.Simulator.Editor.SyntheticEnvironments.Registry.Register"/> to
    /// add a Synthetic Environment to the list of available Synthetic Environment.
    /// </remarks>
    /// <seealso cref="Meta.XR.Simulator.Editor.SyntheticEnvironments.Registry.Register"/>
    /// <seealso cref="Meta.XR.Simulator.Editor.SyntheticEnvironments.Server.Start"/>
    public class SyntheticEnvironment
    {
        public string Name;
        public string InternalName;
        public string ServerBinaryPath;

        /// <summary>
        /// Launch the associated Synthetic Environment Server, passing this Synthetic Environment as argument.
        /// </summary>
        /// <param name="stopExisting">Whether or not a previously existing instance of the Synthetic Environment
        /// Server should be stopped first.</param>
        public void Launch(bool stopExisting = true)
        {
            SyntheticEnvironmentServer.Start(InternalName, ServerBinaryPath, stopExisting);
            LocalSharingServer.Start(stopExisting);
        }

        internal int Index => Registry.RegisteredEnvironments.IndexOf(this);
    }
}

#endif
