// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  /// Sent when the user is finished using the invite panel to send out
  /// invitations. Contains a list of invitees. It can be retrieved using
  /// Message::MessageType::Notification_GroupPresence_InvitationsSent.
  public class LaunchInvitePanelFlowResult
  {
    /// A list of users that were sent an invitation to the session.
    public readonly UserList InvitedUsers;


    public LaunchInvitePanelFlowResult(IntPtr o)
    {
      InvitedUsers = new UserList(CAPI.ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(o));
    }
  }

}
