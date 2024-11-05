// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// The available filtering options on the Challenge returned by
  /// Challenges.GetList().
  public enum ChallengeViewerFilter : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Returns all public ((ChallengeVisibility.Public)) and invite-only
    /// (ChallengeVisibility.InviteOnly) Challenges in which the user is a
    /// participant or invitee. Excludes private (ChallengeVisibility.Private)
    /// challenges.
    [Description("ALL_VISIBLE")]
    AllVisible,

    /// Returns challenges in which the user is a participant.
    [Description("PARTICIPATING")]
    Participating,

    /// Returns challenges that the user has been invited to.
    [Description("INVITED")]
    Invited,

    /// Returns challenges the user is either participating in or invited to.
    [Description("PARTICIPATING_OR_INVITED")]
    ParticipatingOrInvited,

  }

}
