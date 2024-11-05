// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Possible states that an app can respond to the platform notification that
  /// the in-app reporting flow has been requested by the user.
  public enum ReportRequestResponse : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// Response to the platform notification that the in-app reporting flow
    /// request is handled.
    [Description("HANDLED")]
    Handled,

    /// Response to the platform notification that the in-app reporting flow
    /// request is not handled.
    [Description("UNHANDLED")]
    Unhandled,

    /// Response to the platform notification that the in-app reporting flow is
    /// unavailable or non-existent.
    [Description("UNAVAILABLE")]
    Unavailable,

  }

}
