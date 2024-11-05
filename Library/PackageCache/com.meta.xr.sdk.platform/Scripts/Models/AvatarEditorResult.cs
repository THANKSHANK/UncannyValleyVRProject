// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  /// This is the result that can be extracted from message payload when the
  /// avatar editor is launched. It can be retrieved using
  /// Avatar.LaunchAvatarEditor().
  public class AvatarEditorResult
  {
    /// Whether the request has sent.
    public readonly bool RequestSent;


    public AvatarEditorResult(IntPtr o)
    {
      RequestSent = CAPI.ovr_AvatarEditorResult_GetRequestSent(o);
    }
  }

}
