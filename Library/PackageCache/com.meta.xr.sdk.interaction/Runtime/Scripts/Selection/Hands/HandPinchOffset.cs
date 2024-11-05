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

using Oculus.Interaction.GrabAPI;
using Oculus.Interaction.Input;
using UnityEngine;
using UnityEngine.Serialization;

namespace Oculus.Interaction
{
    public class HandPinchOffset : MonoBehaviour
    {
        [SerializeField, Interface(typeof(IHand))]
        private UnityEngine.Object _hand;
        public IHand Hand { get; private set; }

        [SerializeField]
        private HandGrabAPI _handGrabApi;

        [SerializeField, Optional]
        private Collider _collider = null;

        [SerializeField]
        [InspectorName("Offset")]
        private Vector3 _localPositionOffset;

        [SerializeField]
        [InspectorName("Rotation")]
        private Quaternion _rotationOffset = Quaternion.identity;


        [SerializeField]
        [Tooltip("When the attached hand's handedness is set to Left, this property will mirror the offsets. " +
            "This allows for offset values to be set in Right hand coordinates for both Left and Right hands.")]
        private bool _mirrorOffsetsForLeftHand = true;

        #region Properties

        public bool MirrorOffsetsForLeftHand
        {
            get => _mirrorOffsetsForLeftHand;
            set => _mirrorOffsetsForLeftHand = value;
        }

        public Vector3 LocalPositionOffset
        {
            get => _localPositionOffset;
            set => _localPositionOffset = value;
        }

        public Quaternion RotationOffset
        {
            get => _rotationOffset;
            set => _rotationOffset = value;
        }

        #endregion

        protected bool _started = false;

        private Pose _cachedPose = Pose.identity;

        protected virtual void Awake()
        {
            Hand = _hand as IHand;
        }

        protected virtual void Start()
        {
            this.BeginStart(ref _started);
            this.AssertField(Hand, nameof(Hand));
            this.AssertField(_handGrabApi, nameof(_handGrabApi));
            this.EndStart(ref _started);
        }

        protected virtual void OnEnable()
        {
            if (_started)
            {
                Hand.WhenHandUpdated += HandleHandUpdated;
            }
        }

        protected virtual void OnDisable()
        {
            if (_started)
            {
                Hand.WhenHandUpdated -= HandleHandUpdated;
            }
        }

        private void HandleHandUpdated()
        {
            Vector3 center = _handGrabApi.GetPinchCenter();
            if (_collider != null)
            {
                center = _collider.ClosestPoint(center);
            }

            Hand.GetRootPose(out Pose rootPose);

            Pose pinchPose = new Pose(center, rootPose.rotation);
            GetOffset(ref _cachedPose, Hand.Handedness, Hand.Scale);
            _cachedPose.Postmultiply(pinchPose);
            transform.SetPose(_cachedPose);
        }

        private void GetOffset(ref Pose pose, Handedness handedness, float scale)
        {
            if (_mirrorOffsetsForLeftHand && handedness == Handedness.Left)
            {
                pose.position = HandMirroring.Mirror(LocalPositionOffset * scale);
                pose.rotation = HandMirroring.Mirror(RotationOffset);
#if !ISDK_OPENXR_HAND
                pose.rotation = pose.rotation * Constants.LeftRootRotation;
#endif
            }
            else
            {
                pose.position = LocalPositionOffset * scale;
                pose.rotation = RotationOffset;
            }
        }

        #region Inject

        public void InjectAllHandPinchOffset(IHand hand,
            HandGrabAPI handGrabApi)
        {
            InjectHand(hand);
            InjectHandGrabAPI(handGrabApi);
        }

        public void InjectHand(IHand hand)
        {
            Hand = hand;
            _hand = hand as UnityEngine.Object;
        }

        public void InjectHandGrabAPI(HandGrabAPI handGrabApi)
        {
            _handGrabApi = handGrabApi;
        }

        public void InjectOptionalCollider(Collider collider)
        {
            _collider = collider;
        }

        #endregion
    }
}
