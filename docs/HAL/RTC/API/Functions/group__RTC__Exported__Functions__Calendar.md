---
title: RTC exported calendar functions

---

# RTC exported calendar functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Exported calendar functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| hal_status_t | **HAL_RTC_CALENDAR_SetConfig**(const hal_rtc_calendar_config_t * p_config_calendar)<br/>Program the bypass shadow registers and calendar hour format according to the specified parameters.  |
| void | **HAL_RTC_CALENDAR_GetConfig**(hal_rtc_calendar_config_t * p_config_calendar)<br/>Retrieve the bypass shadow registers and calendar hour format configuration.  |
| hal_status_t | **HAL_RTC_CALENDAR_SetTime**(const hal_rtc_time_t * p_time)<br/>Program the RTC time.  |
| void | **HAL_RTC_CALENDAR_GetTime**(hal_rtc_time_t * p_time)<br/>Retrieve the RTC time.  |
| hal_status_t | **HAL_RTC_CALENDAR_SetDate**(const hal_rtc_date_t * p_date)<br/>Program the RTC date.  |
| void | **HAL_RTC_CALENDAR_GetDate**(hal_rtc_date_t * p_date)<br/>Retrieve the RTC date.  |
| hal_status_t | **HAL_RTC_CALENDAR_SetDateTime**(const hal_rtc_date_t * p_date, const hal_rtc_time_t * p_time)<br/>Program the RTC date and time.  |
| void | **HAL_RTC_CALENDAR_GetDateTime**(hal_rtc_date_t * p_date, hal_rtc_time_t * p_time)<br/>Retrieve the RTC date and time.  |
| void | **HAL_RTC_CALENDAR_EnableReferenceClock**(void )<br/>Enable the reference clock detection.  |
| void | **HAL_RTC_CALENDAR_DisableReferenceClock**(void )<br/>Disable the reference clock detection.  |
| hal_rtc_calendar_reference_clock_status_t | **HAL_RTC_CALENDAR_IsEnabledReferenceClock**(void )<br/>Check if the reference clock detection is enabled or disabled.  |
| void | **HAL_RTC_CALENDAR_AddOneHour**(void )<br/>Add one hour to the calendar in one single operation without going through the initialization procedure.  |
| void | **HAL_RTC_CALENDAR_SubtractOneHour**(void )<br/>Subtract one hour to the calendar in one single operation without through the initialization procedure.  |
| void | **HAL_RTC_CALENDAR_SetSummerTimeBit**(void )<br/>Program the store operation bit in order to memorize the daylight saving time status.  |
| void | **HAL_RTC_CALENDAR_SetWinterTimeBit**(void )<br/>Clear the store operation bit in order to memorize the daylight saving time status.  |
| hal_rtc_calendar_daylight_saving_time_status_t | **HAL_RTC_CALENDAR_GetDaylightSavingTime**(void )<br/>Retrieve the daylight saving time status.  |
| uint32_t | **HAL_RTC_CALENDAR_GetBinaryTime**(void )<br/>Retrieve the subsecond register value.  |
| void | **HAL_RTC_CALENDAR_EnableITSubSecondsUnderflow**(void )<br/>Enable the subseconds register underflow interruption.  |
| void | **HAL_RTC_CALENDAR_DisableITSubSecondsUnderflow**(void )<br/>Disable the subseconds register underflow interruption.  |
| hal_rtc_calendar_it_underflow_status_t | **HAL_RTC_CALENDAR_IsEnabledITSubSecondsUnderflow**(void )<br/>Check if the subseconds register underflow interruption is enabled or disabled.  |

## Detailed Description

Exported calendar functions.

The calendar of RTC store and display time and date information in a BCD format. It includes subseconds, seconds, minutes, hours, weekday, date, month, year. The calendar only works when using the BCD and mixed mode otherwise only the subseconds down-counter register works.


# Calendar configuration


## Calendar hour format and shadow registers.

The user can set the hour format to 24 hours or 12 hours format by programming the hal_rtc_calendar_config_t::hour_format and calling HAL_RTC_CALENDAR_SetConfig function.


## Shadow registers

The shadow registers mirror the values of the calendar date and time registers. When the shadow registers are not bypassed the application reads the values of date and time in the shadow registers. Reading the time locks the values in calendar shadow registers to ensure consistency between time and date values, reading the date unlocks them. The user needs to call the function HAL_RTC_CALENDAR_GetTime before HAL_RTC_CALENDAR_GetDate, or call only HAL_RTC_CALENDAR_GetDateTime functions to retrieve the time and date correctly.

The application can have direct access to the date and time registers by bypassing the shadow registers. Use the hal_rtc_calendar_config_t::bypass_shadow_register to configure the shadow register bypass.


# Other calendar services


## Reference clock detection

In BCD mode only, the update of the RTC calendar can be synchronized to a reference clock. This reference clock is used to compensate for the imprecision of the calendar seconds update frequency.

This detection is only enabled if the prescaler are set to their default values which are 128 and 256 for hal_rtc_config_t::asynch_prediv and hal_rtc_config_t::synch_prediv respectively.


## Binary mode

A dedicated API is given to optimize the code when using the binary mode. The function HAL_RTC_CALENDAR_GetBinaryTime retrieves the value of the subseconds down-counter register.


## Daylight-saving time and hour increment decrement

The functions HAL_RTC_CALENDAR_SetSummerTimeBit and HAL_RTC_CALENDAR_SetWinterTimeBit enable an application to keep information about the daylight-saving time. Those functions don't alter the hours registers and the application needs to increment or decrement the hours by using HAL_RTC_CALENDAR_AddOneHour and HAL_RTC_CALENDAR_SubtractOneHour respectively, which are independent of the daylight-saving time bit.

If needed the daylight saving time bit can also be used to save other kinds of information.


## Subseconds underflow

In binary mode or mixed mode, the user can enable the sub-seconds underflow interruption. This interruption triggers when the subseconds down-counter underflows.


## Functions Documentation

### function HAL_RTC_CALENDAR_SetConfig

```
hal_status_t HAL_RTC_CALENDAR_SetConfig(
    const hal_rtc_calendar_config_t * p_config_calendar
)
```

Program the bypass shadow registers and calendar hour format according to the specified parameters.

**Parameters**:

  * **p_config_calendar** pointer to an RTC calendar configuration instance.


**Returns**:

  * **HAL_OK**
  * **HAL_INVALID_PARAM** when `p_config_calendar` is NULL.


**Warning**:

  * The RTC calendar configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.
  * The RTC calendar configuration needs to be called when RTC is in initializion mode, use HAL_RTC_EnterInitMode to enter initialization mode.


### function HAL_RTC_CALENDAR_GetConfig

```
void HAL_RTC_CALENDAR_GetConfig(
    hal_rtc_calendar_config_t * p_config_calendar
)
```

Retrieve the bypass shadow registers and calendar hour format configuration.

**Parameters**:

  * **p_config_calendar** pointer to an RTC calendar configuration instance.


### function HAL_RTC_CALENDAR_SetTime

```
hal_status_t HAL_RTC_CALENDAR_SetTime(
    const hal_rtc_time_t * p_time
)
```

Program the RTC time.

**Parameters**:

  * **p_time** pointer to an RTC time instance.


**Returns**:

  * **HAL_OK**
  * **HAL_INVALID_PARAM** when `p_time` is NULL.


**Note**: hal_rtc_time_t::microsec field is ignored.

**Warning**:

  * The RTC time configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.
  * The RTC time configuration needs to be called when RTC is in initialization mode, use HAL_RTC_EnterInitMode to enter initialization mode.


### function HAL_RTC_CALENDAR_GetTime

```
void HAL_RTC_CALENDAR_GetTime(
    hal_rtc_time_t * p_time
)
```

Retrieve the RTC time.

**Parameters**:

  * **p_time** pointer to an RTC time instance.


**Note**: When using the shadown registers (default): Reading RTC current time locks the values in calendar shadow registers to ensure consistency between time and date values. Call HAL_RTC_CALENDAR_GetDate to unlock the time value.

### function HAL_RTC_CALENDAR_SetDate

```
hal_status_t HAL_RTC_CALENDAR_SetDate(
    const hal_rtc_date_t * p_date
)
```

Program the RTC date.

**Parameters**:

  * **p_date** pointer to an RTC date instance.


**Returns**:

  * **HAL_OK**
  * **HAL_INVALID_PARAM** when `p_date` is NULL.


**Warning**:

  * The RTC date configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.
  * The RTC date configuration needs to be called when RTC is in initialized mode, use HAL_RTC_EnterInitMode to enter initialization mode.


### function HAL_RTC_CALENDAR_GetDate

```
void HAL_RTC_CALENDAR_GetDate(
    hal_rtc_date_t * p_date
)
```

Retrieve the RTC date.

**Parameters**:

  * **p_date** pointer to an RTC date instance.


### function HAL_RTC_CALENDAR_SetDateTime

```
hal_status_t HAL_RTC_CALENDAR_SetDateTime(
    const hal_rtc_date_t * p_date,
    const hal_rtc_time_t * p_time
)
```

Program the RTC date and time.

**Parameters**:

  * **p_date** pointer to an RTC date instance.
  * **p_time** pointer to an RTC time instance.


**Returns**:

  * **HAL_OK**
  * **HAL_INVALID_PARAM** when `p_date` or `p_time` are NULL.


**Note**: hal_rtc_time_t::microsec field is ignored.

**Warning**:

  * The RTC date and time configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.
  * The RTC date and time configuration needs to be called when RTC is in initialized mode, use HAL_RTC_EnterInitMode to enter initialization mode.


### function HAL_RTC_CALENDAR_GetDateTime

```
void HAL_RTC_CALENDAR_GetDateTime(
    hal_rtc_date_t * p_date,
    hal_rtc_time_t * p_time
)
```

Retrieve the RTC date and time.

**Parameters**:

  * **p_date** pointer to an RTC date instance.
  * **p_time** pointer to an RTC time instance.


### function HAL_RTC_CALENDAR_EnableReferenceClock

```
void HAL_RTC_CALENDAR_EnableReferenceClock(
    void
)
```

Enable the reference clock detection.

**Note**: The detection only works when RTC is set to BCD mode only HAL_RTC_MODE_BCD, the synchronous prescaler hal_rtc_config_t::synch_prediv and the asynchronous prescaler hal_rtc_config_t::asynch_prediv are set to 0x00FF (default value) and to 0x007F (default-value) respectively.

**Warning**:

  * The RTC reference clock configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.
  * The RTC reference clock configuration needs to be called when RTC is in initialized mode, use HAL_RTC_EnterInitMode to enter initialization mode.


### function HAL_RTC_CALENDAR_DisableReferenceClock

```
void HAL_RTC_CALENDAR_DisableReferenceClock(
    void
)
```

Disable the reference clock detection.

**Warning**:

  * The RTC reference clock configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.
  * The RTC reference clock configuration needs to be called when RTC is in initialized mode, use HAL_RTC_EnterInitMode to enter initialization mode.


### function HAL_RTC_CALENDAR_IsEnabledReferenceClock

```
hal_rtc_calendar_reference_clock_status_t HAL_RTC_CALENDAR_IsEnabledReferenceClock(
    void
)
```

Check if the reference clock detection is enabled or disabled.

**Returns**:

  * **hal_rtc_calendar_reference_clock_status_t** Reference clock detection status


### function HAL_RTC_CALENDAR_AddOneHour

```
void HAL_RTC_CALENDAR_AddOneHour(
    void
)
```

Add one hour to the calendar in one single operation without going through the initialization procedure.

**Warning**: The RTC hour increment is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.

### function HAL_RTC_CALENDAR_SubtractOneHour

```
void HAL_RTC_CALENDAR_SubtractOneHour(
    void
)
```

Subtract one hour to the calendar in one single operation without through the initialization procedure.

**Warning**: The RTC hour decrement is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.

### function HAL_RTC_CALENDAR_SetSummerTimeBit

```
void HAL_RTC_CALENDAR_SetSummerTimeBit(
    void
)
```

Program the store operation bit in order to memorize the daylight saving time status.

**Warning**: The RTC summertime/wintertime bit is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.

### function HAL_RTC_CALENDAR_SetWinterTimeBit

```
void HAL_RTC_CALENDAR_SetWinterTimeBit(
    void
)
```

Clear the store operation bit in order to memorize the daylight saving time status.

**Warning**: The RTC summertime/wintertime bit is write protected, use the HAL_RTC_DisableWriteProtection before calling this function.

### function HAL_RTC_CALENDAR_GetDaylightSavingTime

```
hal_rtc_calendar_daylight_saving_time_status_t HAL_RTC_CALENDAR_GetDaylightSavingTime(
    void
)
```

Retrieve the daylight saving time status.

**Returns**:

  * **hal_rtc_calendar_daylight_saving_time_status_t** daylight saving time status.


### function HAL_RTC_CALENDAR_GetBinaryTime

```
uint32_t HAL_RTC_CALENDAR_GetBinaryTime(
    void
)
```

Retrieve the subsecond register value.

**Returns**:

  * **uint32_t** Value of the subsecond register.


### function HAL_RTC_CALENDAR_EnableITSubSecondsUnderflow

```
void HAL_RTC_CALENDAR_EnableITSubSecondsUnderflow(
    void
)
```

Enable the subseconds register underflow interruption.

### function HAL_RTC_CALENDAR_DisableITSubSecondsUnderflow

```
void HAL_RTC_CALENDAR_DisableITSubSecondsUnderflow(
    void
)
```

Disable the subseconds register underflow interruption.

### function HAL_RTC_CALENDAR_IsEnabledITSubSecondsUnderflow

```
hal_rtc_calendar_it_underflow_status_t HAL_RTC_CALENDAR_IsEnabledITSubSecondsUnderflow(
    void
)
```

Check if the subseconds register underflow interruption is enabled or disabled.

**Returns**:

  * **hal_rtc_calendar_it_underflow_status_t** Subseconds register underflow interruption status






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200