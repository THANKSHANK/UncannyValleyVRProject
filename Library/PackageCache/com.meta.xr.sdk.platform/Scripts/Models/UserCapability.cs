// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  /// This object represents a permission or capability for a particular user.
  /// You can fetch all the user capabilities for a logged-in User by using
  /// Users.GetUserCapabilities(). There is a unique name for every user
  /// capability.
  public class UserCapability
  {
    /// The human readable description of the capability describing what possessing
    /// it entails for a given User.
    public readonly string Description;
    /// Whether the capability is currently enabled for the user. When false, this
    /// field will gate the User from the specified services.
    public readonly bool IsEnabled;
    /// The unique identifier for the capability. An example capability could be
    /// "earn_achievements".
    public readonly string Name;
    /// This field specifies the reason the capability was enabled or disabled for
    /// the given User.
    ///
    /// List of Reason Codes:
    ///
    /// - REASON_UNKOWN
    ///
    /// - SOCIAL_DISTANCING
    ///
    /// - VERBAL_ABUSE
    ///
    /// - TEXT_ABUSE
    ///
    /// - PARENTAL_CONTROL
    ///
    /// - DEVELOPER_ACTION
    ///
    /// - SALSA_RESTRICTION
    ///
    /// - SOCIAL_SUSPENSION
    ///
    /// - PAYMENT_SUSPENSION
    ///
    /// - PAYMENT_GIFTING_SUSPENSION
    public readonly string ReasonCode;


    public UserCapability(IntPtr o)
    {
      Description = CAPI.ovr_UserCapability_GetDescription(o);
      IsEnabled = CAPI.ovr_UserCapability_GetIsEnabled(o);
      Name = CAPI.ovr_UserCapability_GetName(o);
      ReasonCode = CAPI.ovr_UserCapability_GetReasonCode(o);
    }
  }

  /// Represents a paginated list of UserCapability elements
  public class UserCapabilityList : DeserializableList<UserCapability> {
    /// Instantiates a C# wrapper class that wraps a native list by pointer. Used internally by Platform SDK to wrap the list.
    public UserCapabilityList(IntPtr a) {
      var count = (int)CAPI.ovr_UserCapabilityArray_GetSize(a);
      _Data = new List<UserCapability>(count);
      for (int i = 0; i < count; i++) {
        _Data.Add(new UserCapability(CAPI.ovr_UserCapabilityArray_GetElement(a, (UIntPtr)i)));
      }

      _NextUrl = CAPI.ovr_UserCapabilityArray_GetNextUrl(a);
    }

  }
}
