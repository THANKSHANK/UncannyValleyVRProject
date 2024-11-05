// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Age category for developers to send to Meta. The values are used in
  /// UserAgeCategory.Report() API.
  public enum AppAgeCategory : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Child age group for users between the ages of 10-12 (or applicable age in
    /// user's region)
    [Description("CH")]
    Ch,

    /// Non-child age group for users ages 13 and up (or applicable age in user's
    /// region)
    [Description("NCH")]
    Nch,

  }

}
