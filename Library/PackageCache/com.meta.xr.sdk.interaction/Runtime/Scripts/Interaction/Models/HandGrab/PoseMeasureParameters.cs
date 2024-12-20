﻿/*
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
using UnityEngine;

namespace Oculus.Interaction.Grab
{
    [Serializable]
    public struct PoseMeasureParameters
    {
        /// <summary>
        /// Weights the scoring of the pose based more in the amount of translation
        /// or rotation needed to align the interactor with the desired pose.
        /// </summary>
        [SerializeField]
        [Range(0f, 1f)]
        [Tooltip("Weights the scoring of the pose based more in the amount of translation" +
            "or rotation needed to align the interactor with the desired pose.")]
        private float _positionRotationWeight;

        public float PositionRotationWeight => _positionRotationWeight;

        public PoseMeasureParameters(float positionRotationWeight)
        {
            _positionRotationWeight = positionRotationWeight;
        }

        public static PoseMeasureParameters Lerp(in PoseMeasureParameters from, in PoseMeasureParameters to, float t)
        {
            float positionRotationWeight = Mathf.Lerp(from._positionRotationWeight, to._positionRotationWeight, t);
            return new PoseMeasureParameters(positionRotationWeight);
        }

        public static readonly PoseMeasureParameters DEFAULT = new PoseMeasureParameters(0f);
    }
}
