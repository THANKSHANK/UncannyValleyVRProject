// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  /// The information about the user's invitation to others to join their current
  /// session. It can be retrieved using GroupPresence.LaunchInvitePanel()}.
  public class InvitePanelResultInfo
  {
    /// A boolean for whether or not any invites have been sent.
    public readonly bool InvitesSent;


    public InvitePanelResultInfo(IntPtr o)
    {
      InvitesSent = CAPI.ovr_InvitePanelResultInfo_GetInvitesSent(o);
    }
  }

}
