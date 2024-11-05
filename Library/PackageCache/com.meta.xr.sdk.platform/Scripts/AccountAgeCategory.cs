// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Age category in Meta account. The values are used in UserAgeCategory.Get()
  /// API.
  public enum AccountAgeCategory : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Child age group for users between the ages of 10-12 (or applicable age in
    /// user's region)
    [Description("CH")]
    Ch,

    /// Teenage age group for users between the ages of 13-17 (or applicable age in
    /// user's region)
    [Description("TN")]
    Tn,

    /// Adult age group for users ages 18 and up (or applicable age in user's
    /// region)
    [Description("AD")]
    Ad,

  }

}
