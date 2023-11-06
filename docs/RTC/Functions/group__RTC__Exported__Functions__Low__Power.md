---
title: RTC exported low power configuration functions

---

# RTC exported low power configuration functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Low power configuration functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **HAL_RTC_EnableUltraLowPowerMode**(void )<br/>Enable the RTC ultra low power mode.  |
| void | **HAL_RTC_DisableUltraLowPowerMode**(void )<br/>Disable the RTC ultra low power mode.  |
| hal_rtc_ultra_low_power_mode_status_t | **HAL_RTC_IsEnabledUltraLowPowerMode**(void )<br/>Check if the RTC ultra low power mode is enabled or not.  |

## Detailed Description

Low power configuration functions. 

It is possible to drastically reduce the RTC power consumption by setting the RTC to low power mode. In this configuration the whole RTC is clocked by the clock after the first asynchronous prescaler only.

When the division factor of the asynchronous prescaler is not a power of 2 (( hal_rtc_config_t::asynch_prediv +1) % 2 == 0), the low power mode can't be activated. 


## Functions Documentation

### function HAL_RTC_EnableUltraLowPowerMode

```
void HAL_RTC_EnableUltraLowPowerMode(
    void 
)
```

Enable the RTC ultra low power mode. 

**Note**: When hal_rtc_config_t::asynch_prediv +1 % 2 == 0, calling this function don't enable the low power mode. 

**Warning**: The RTC low power configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 

### function HAL_RTC_DisableUltraLowPowerMode

```
void HAL_RTC_DisableUltraLowPowerMode(
    void 
)
```

Disable the RTC ultra low power mode. 

**Warning**: The RTC configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 

### function HAL_RTC_IsEnabledUltraLowPowerMode

```
hal_rtc_ultra_low_power_mode_status_t HAL_RTC_IsEnabledUltraLowPowerMode(
    void 
)
```

Check if the RTC ultra low power mode is enabled or not. 

**Returns**:

  * **hal_rtc_ultra_low_power_mode_status_t** Ultra low power mode status. 






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200