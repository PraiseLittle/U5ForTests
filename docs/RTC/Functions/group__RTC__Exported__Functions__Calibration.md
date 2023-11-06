---
title: RTC exported calendar calibration functions

---

# RTC exported calendar calibration functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Exported calibration functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| hal_status_t | **HAL_RTC_EnableCalibration**(hal_rtc_calibration_period_t calibration_period, hal_rtc_calibration_pulse_t pulse_add, uint32_t subtracted_pulses)<br/>Enable the smooth calibration parameters.  |
| hal_status_t | **HAL_RTC_DisableCalibration**(void )<br/>Disable the smooth calibration parameters.  |
| hal_rtc_calibration_status_t | **HAL_RTC_IsEnabledCalibration**(void )<br/>Check if the smooth calibration is enabled.  |
| hal_status_t | **HAL_RTC_ShiftCalibration**(hal_rtc_calibration_shift_second_t add_one_sec, uint32_t fraction_sec_to_subtract)<br/>Shift the RTC clock (SubSeconds Register) by a fraction of a second.  |

## Detailed Description

Exported calibration functions. 


# Smooth digital calibration

The RTC frequency can be calibrated with a very small resolution of about 0.954 ppm with a range from -487.1 ppm to 488.5 ppm. This adjustment is made on the RTCCLK or the clock after the asynchronous prescaler when low power mode is enabled.

To activate the smooth calibration, one needs to call HAL_RTC_EnableCalibration with the parameters `pulse_add` or or `subtracted_pulses` set to HAL_RTC_CALIBRATION_PULSE_INSERTED or a value different from 0 respectively. The `subtracted_pulses` specifies the number of pulses of the clock to be masked during the calibration cycle chosen by the `calibration_period`. If `calibratio_period` is set to HAL_RTC_CALIBRATION_PERIOD_16SEC or HAL_RTC_CALIBRATION_PERIOD_8SEC the first bit and the two first bit are stuck at 0 respectively.

Setting the `pulse_add` parameter inserts one extra pulse every 2^11 cycles which doesn't dependent on the calibration period.

The frequency after calibration is given by this formula freq_calib = freq_RTCCLK x [1 + ( `pulse_add` x 512 - `subtracted_pulses`) / (2^20 + `subtracted_pulses` - `pulse_add` x 512)]

When the value of the asynchronous prescaler hal_rtc_config_t::asynch_prediv is inferior to 3 no pulses are inserted, thus making the parameter `pulse_add` is ignored.

To stop the calibration call HAL_RTC_DisableCalibration. To retrieve the status of the calibration call HAL_RTC_IsEnabledCalibration.


# Synchronization of RTC the calendar

After reading the subseconds register and calculating an offset with the remote clock, the goal of this feature is to synchronize the RTC by adding/subtracting the offset to synchronize the RTC with the remote clock. The shift operation consists of adding or subtracting some subseconds depending on the parameters of the HAL_RTC_ShiftCalibration. The param `add_one_sec` adds one second to the time register and the param `fraction_sec_to_subtract` subtract some subseconds to the subseconds register.

The shift operation doesn't work properly in different cases:

1. In BCD mode HAL_RTC_MODE_BCD, if the reference clock is enabled.
2. In BCD mode HAL_RTC_MODE_BCD, the 15th value of the subsecond register is equal to 1.
3. In mixed mode HAL_RTC_MODE_MIX, the `fraction_sec_to_subtract` 14, [hal_rtc_config_t::seconds_update ] must be equal to 0.
4. In mixed mode HAL_RTC_MODE_MIX the BCD increment value hal_rtc_config_t::seconds_update in the subsecond register must be equal to 0. 


## Functions Documentation

### function HAL_RTC_EnableCalibration

```
hal_status_t HAL_RTC_EnableCalibration(
    hal_rtc_calibration_period_t calibration_period,
    hal_rtc_calibration_pulse_t pulse_add,
    uint32_t subtracted_pulses
)
```

Enable the smooth calibration parameters. 

**Parameters**:

  * **calibration_period** Select the smooth calibration period, values from hal_rtc_calibration_period_t. 
  * **pulse_add** Choose between increasing the frequency by one pulse every 2^11 pulses or nothing hal_rtc_calibration_pulse_t. 
  * **subtracted_pulses** Number of pulses to subtract out of 2^20 pulses. 


**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** if a recalibration operation is still ongoing after RTC timeout duration. 


**Note**: 

  * To activate the smooth calibration, the parameters `pulse_add` or or `subtracted_pulses` must be set to HAL_RTC_CALIBRATION_PULSE_INSERTED or a value different from 0 respectively. 
  * If `calibratio_period` is set to HAL_RTC_CALIBRATION_PERIOD_16SEC or HAL_RTC_CALIBRATION_PERIOD_8SEC the first bit and the two first bit are stuck at 0 respectively. 
  * If PREDIV_A ( hal_rtc_config_t::asynch_prediv) is inferior to 3, the bit CALP set by `pulse_add` is always equal to 0, thus `pulse_add` is ignored. 
  * The frequency after calibration is given by this formula : F_CAL = F_RTCCLK x [1 + ( `pulse_add` x 512 - `subtracted_pulses`) / (2^20 + `subtracted_pulses` - `pulse_add` x 512)] 


**Warning**: 

  * The RTC calibration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 
  * When in low power mode (by using HAL_RTC_EnableUltraLowPowerMode) the calibration mechanism is applied on the RTCCLK after going through the asynchronous prescaler. 


### function HAL_RTC_DisableCalibration

```
hal_status_t HAL_RTC_DisableCalibration(
    void 
)
```

Disable the smooth calibration parameters. 

**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** if a recalibration operation is still ongoing after RTC timeout duration. 


**Warning**: The RTC calibration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 

### function HAL_RTC_IsEnabledCalibration

```
hal_rtc_calibration_status_t HAL_RTC_IsEnabledCalibration(
    void 
)
```

Check if the smooth calibration is enabled. 

**Returns**:

  * **hal_rtc_calibration_status_t** RTC smooth calibration status. 


### function HAL_RTC_ShiftCalibration

```
hal_status_t HAL_RTC_ShiftCalibration(
    hal_rtc_calibration_shift_second_t add_one_sec,
    uint32_t fraction_sec_to_subtract
)
```

Shift the RTC clock (SubSeconds Register) by a fraction of a second. 

**Parameters**:

  * **add_one_sec** Choose between adding one second to the clock. 
  * **fraction_sec_to_subtract** Number of fraction of a second to subtract. 


**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** if a previous shift operation is still ongoing after RTC timeout duration. 
  * **HAL_TIMEOUT** if the shift operation is still pending after RTC timeout duration. 
  * **HAL_ERROR** if the reference clock detection is enabled. 
  * **HAL_ERROR** In BCD mode HAL_RTC_MODE_BCD the 15th value of the subsecond register is equal to 1. 
  * **HAL_ERROR** In mixed mode HAL_RTC_MODE_MIX the `fraction_sec_to_subtract` 14, [hal_rtc_config_t::seconds_update ] must be equal to 0. 
  * **HAL_ERROR** In mixed mode HAL_RTC_MODE_MIX the BCD increment value hal_rtc_config_t::seconds_update in the subsecond register must be equal to 0. 


**Note**: the RTC calibration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 

**Warning**: 

  * This feature is not compatible with the reference clock detection feature enabled by HAL_RTC_CALENDAR_EnableReferenceClock
  * This functions will not decrease the number of seconds nor overflow the subseconds register. 






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200