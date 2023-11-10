---
title: RTC exported write protection and initialization

---

# RTC exported write protection and initialization

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Write protection and initialization mode.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **HAL_RTC_EnableWriteProtection**(void )<br/>Enable the RTC registers write protection.  |
| void | **HAL_RTC_DisableWriteProtection**(void )<br/>Disable the RTC registers write protection.  |
| hal_status_t | **HAL_RTC_EnterInitMode**(void )<br/>Enter the RTC initialization mode.  |
| hal_status_t | **HAL_RTC_ExitInitMode**(void )<br/>Exit the RTC initialization mode.  |

## Detailed Description

Write protection and initialization mode. 


# RTC write protection.

The RTC IP has its own write protection. By default, after backup reset, some of the RTC registers are protected against parasitic write access. Those registers directly or indirectly impact the RTC date and time.

Some functions don't work properly if the RTC write protection is enabled. Those functions are:

* HAL_RTC_EnterInitMode and HAL_RTC_ExitInitMode
* HAL_RTC_SetConfig
* HAL_RTC_EnableUltraLowPowerMode and HAL_RTC_DisableUltraLowPowerMode
* HAL_RTC_CALENDAR_SetConfig
* HAL_RTC_CALENDAR_SetDateTime, HAL_RTC_CALENDAR_SetTime and HAL_RTC_CALENDAR_SetDate
* HAL_RTC_CALENDAR_EnableReferenceClock and HAL_RTC_CALENDAR_DisableReferenceClock
* HAL_RTC_CALENDAR_SetSummerTimeBit and HAL_RTC_CALENDAR_SetWinterTimeBit
* HAL_RTC_CALENDAR_AddOneHour and HAL_RTC_CALENDAR_SubtractOneHour
* HAL_RTC_EnableCalibration
* HAL_RTC_DisableCalibration
* HAL_RTC_ShiftCalibration

Calling HAL_RTC_DisableWriteProtection and HAL_RTC_EnableWriteProtection disables and enables the write protection respectively.


# Initialization mode

The initialization mode of the RTC permits to initialize and configure the RTC calendar. Entering this mode stops the calendar counter.

If RTC is not in initialization mode some functions don't work properly. Those functions are:

* HAL_RTC_SetConfig
* HAL_RTC_CALENDAR_SetConfig
* HAL_RTC_CALENDAR_SetDateTime, HAL_RTC_CALENDAR_SetTime and HAL_RTC_CALENDAR_SetDate
* HAL_RTC_CALENDAR_EnableReferenceClock and HAL_RTC_CALENDAR_DisableReferenceClock

Calling HAL_RTC_EnterInitMode and HAL_RTC_ExitInitMode make the RTC enter and exit initialization mode respectively. 


## Functions Documentation

### function HAL_RTC_EnableWriteProtection

```
void HAL_RTC_EnableWriteProtection(
    void 
)
```

Enable the RTC registers write protection. 

**Note**: Not all RTC registers are concerned by the write protection. 

### function HAL_RTC_DisableWriteProtection

```
void HAL_RTC_DisableWriteProtection(
    void 
)
```

Disable the RTC registers write protection. 

**Note**: Not all RTC registers are concerned by the write protection. 

### function HAL_RTC_EnterInitMode

```
hal_status_t HAL_RTC_EnterInitMode(
    void 
)
```

Enter the RTC initialization mode. 

**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** RTC doesn't enter initialization mode before the RTC timeout duration. 


**Warning**: The RTC initialization mode is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 

### function HAL_RTC_ExitInitMode

```
hal_status_t HAL_RTC_ExitInitMode(
    void 
)
```

Exit the RTC initialization mode. 

**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** Calendar resynchronization is still pending after timeout duration. 


**Warning**: the RTC initialization mode is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 





-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200