// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  /// An ID for a User which is unique per Developer Center organization. It can
  /// be retrieved using Users.GetOrgScopedID().
  public class OrgScopedID
  {
    /// The unique id of the user, allowing different apps within the same
    /// Developer Center organization to have a consistent id for the same user.
    public readonly UInt64 ID;


    public OrgScopedID(IntPtr o)
    {
      ID = CAPI.ovr_OrgScopedID_GetID(o);
    }
  }

}
