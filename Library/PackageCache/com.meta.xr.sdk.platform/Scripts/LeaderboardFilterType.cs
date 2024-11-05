// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Describe the filter type that can be enabled on the leaderboard.
  public enum LeaderboardFilterType : int
  {
    /// No filter enabled on the leaderboard.
    [Description("NONE")]
    None,

    /// Filter the leaderboard to include only friends of the current user.
    [Description("FRIENDS")]
    Friends,

    [Description("UNKNOWN")]
    Unknown,

    /// Filter the leaderboard to include specific user IDs. Use this filter to get
    /// rankings for users that are competing against each other. You specify the
    /// leaderboard name and whether to start at the top, or for the results to
    /// center on the (client) user. Note that if you specify the results to center
    /// on the client user, their leaderboard entry will be included in the
    /// returned array, regardless of whether their ID is explicitly specified in
    /// the list of IDs.
    [Description("USER_IDS")]
    UserIds,

  }

}
