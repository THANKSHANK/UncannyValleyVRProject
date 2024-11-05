// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{

  using Description = System.ComponentModel.DescriptionAttribute;

  /// Current status of the app on the device. An app can only check its own
  /// status.
  public enum AppStatus : int
  {
    [Description("UNKNOWN")]
    Unknown,

    /// User has valid entitlement to the app but it is not currently installed on
    /// the device.
    [Description("ENTITLED")]
    Entitled,

    /// Download of the app is currently queued.
    [Description("DOWNLOAD_QUEUED")]
    DownloadQueued,

    /// Download of the app is currently in progress.
    [Description("DOWNLOADING")]
    Downloading,

    /// Install of the app is currently in progress.
    [Description("INSTALLING")]
    Installing,

    /// App is installed on the device.
    [Description("INSTALLED")]
    Installed,

    /// App is being uninstalled from the device.
    [Description("UNINSTALLING")]
    Uninstalling,

    /// Install of the app is currently queued.
    [Description("INSTALL_QUEUED")]
    InstallQueued,

  }

}
