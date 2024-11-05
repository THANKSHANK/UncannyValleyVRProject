// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Describes the creator of the associated challenge.
  public enum ChallengeCreationType : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// The challenge was created by a User.
    [Description("USER_CREATED")]
    UserCreated,

    /// The challenge was created by the app developer.
    [Description("DEVELOPER_CREATED")]
    DeveloperCreated,

  }

}
