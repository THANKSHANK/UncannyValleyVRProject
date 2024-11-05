// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Determines the type of the achievement.
  public enum AchievementType : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Simple achievements are unlocked by a single event or objective completion.
    [Description("SIMPLE")]
    Simple,

    /// Bitfield achievements are unlocked when a target number of bits are set
    /// within a bitfield.
    [Description("BITFIELD")]
    Bitfield,

    /// Count achievements are unlocked when a counter reaches a defined target.
    [Description("COUNT")]
    Count,

  }

}
