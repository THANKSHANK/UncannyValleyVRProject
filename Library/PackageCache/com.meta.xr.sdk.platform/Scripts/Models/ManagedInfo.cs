// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  public class ManagedInfo
  {
    public readonly string Department;
    public readonly string Email;
    public readonly string EmployeeNumber;
    public readonly string ExternalId;
    public readonly string Location;
    public readonly string Manager;
    public readonly string Name;
    public readonly string OrganizationId;
    public readonly string OrganizationName;
    public readonly string Position;


    public ManagedInfo(IntPtr o)
    {
      Department = CAPI.ovr_ManagedInfo_GetDepartment(o);
      Email = CAPI.ovr_ManagedInfo_GetEmail(o);
      EmployeeNumber = CAPI.ovr_ManagedInfo_GetEmployeeNumber(o);
      ExternalId = CAPI.ovr_ManagedInfo_GetExternalId(o);
      Location = CAPI.ovr_ManagedInfo_GetLocation(o);
      Manager = CAPI.ovr_ManagedInfo_GetManager(o);
      Name = CAPI.ovr_ManagedInfo_GetName(o);
      OrganizationId = CAPI.ovr_ManagedInfo_GetOrganizationId(o);
      OrganizationName = CAPI.ovr_ManagedInfo_GetOrganizationName(o);
      Position = CAPI.ovr_ManagedInfo_GetPosition(o);
    }
  }

}
