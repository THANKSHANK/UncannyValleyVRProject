// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  public class NetSyncOptions {

    /// Creates a new instance of ::NetSyncOptions which is used to customize the option flow. It returns a handle to the newly created options object, which can be used to set various properties for the options.
    public NetSyncOptions() {
      Handle = CAPI.ovr_NetSyncOptions_Create();
    }

    /// If provided, immediately set the voip_group to this value upon connection
    public void SetVoipGroup(string value) {
      CAPI.ovr_NetSyncOptions_SetVoipGroup(Handle, value);
    }

    /// When a new remote voip user connects, default that connection to this
    /// stream type by default.
    public void SetVoipStreamDefault(NetSyncVoipStreamMode value) {
      CAPI.ovr_NetSyncOptions_SetVoipStreamDefault(Handle, value);
    }

    /// Unique identifier within the current application grouping
    public void SetZoneId(string value) {
      CAPI.ovr_NetSyncOptions_SetZoneId(Handle, value);
    }


    /// This operator allows you to pass an instance of the ::NetSyncOptions class to native C code as an IntPtr. The operator returns the handle of the options object, or IntPtr.Zero if the object is null.
    public static explicit operator IntPtr(NetSyncOptions options) {
      return options != null ? options.Handle : IntPtr.Zero;
    }

    /// Destroys an existing instance of the ::NetSyncOptions and frees up memory when you're done using it.
    ~NetSyncOptions() {
      CAPI.ovr_NetSyncOptions_Destroy(Handle);
    }

    IntPtr Handle;
  }
}
