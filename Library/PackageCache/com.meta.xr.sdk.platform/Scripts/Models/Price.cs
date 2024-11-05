// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

namespace Oculus.Platform.Models
{
  using System;
  using System.Collections;
  using Oculus.Platform.Models;
  using System.Collections.Generic;
  using UnityEngine;

  /// The price of a Product. A price with a currency of "USD" and an amount in
  /// hundredths of 99 has a formatted string of "$0.99".
  public class Price
  {
    /// The price of the product in hundredths of currency units.
    public readonly uint AmountInHundredths;
    /// The ISO 4217 currency code for the price of the product.
    public readonly string Currency;
    /// The formatted string representation of the price.
    public readonly string Formatted;


    public Price(IntPtr o)
    {
      AmountInHundredths = CAPI.ovr_Price_GetAmountInHundredths(o);
      Currency = CAPI.ovr_Price_GetCurrency(o);
      Formatted = CAPI.ovr_Price_GetFormatted(o);
    }
  }

}
