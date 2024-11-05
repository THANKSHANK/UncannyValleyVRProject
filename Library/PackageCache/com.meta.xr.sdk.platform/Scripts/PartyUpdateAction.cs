// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// An enum that specifies the action that the user can take, which will lead
  /// to a PartyUpdateNotification. It can be used in {'party_update':
  /// 'Message::MessageType::Notification_Party_PartyUpdate'} and can be
  /// retrieved using PartyUpdateNotification#Action
  public enum PartyUpdateAction : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Indicates the user joined the party.
    [Description("Join")]
    Join,

    /// Indicates the user left the party.
    [Description("Leave")]
    Leave,

    /// Indicates the user was invited to the party.
    [Description("Invite")]
    Invite,

    /// Indicates the user was uninvited to the party.
    [Description("Uninvite")]
    Uninvite,

  }

}
