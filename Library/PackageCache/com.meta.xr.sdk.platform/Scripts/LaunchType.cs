// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  public enum LaunchType : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Normal launch from the user's library
    [Description("NORMAL")]
    Normal,

    /// Launch from the user accepting an invite. Check
    /// LaunchDetails#LobbySessionID, LaunchDetails#MatchSessionID,
    /// LaunchDetails#DestinationApiName and LaunchDetails#DeeplinkMessage.
    [Description("INVITE")]
    Invite,

    /// DEPRECATED
    [Description("COORDINATED")]
    Coordinated,

    /// Launched from Application.LaunchOtherApp(). Check
    /// LaunchDetails#LaunchSource and LaunchDetails#DeeplinkMessage.
    [Description("DEEPLINK")]
    Deeplink,

  }

}
