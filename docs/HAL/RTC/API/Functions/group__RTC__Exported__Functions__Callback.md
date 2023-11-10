---
title: RTC exported callback functions

---

# RTC exported callback functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Callback exported functions.  Callback functions that user can overwrite for the different interruption:  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| __WEAK void | **HAL_RTC_AlarmAEventCallback**(void )<br/>Alarm A callback.  |
| __WEAK void | **HAL_RTC_AlarmBEventCallback**(void )<br/>Alarm B callback.  |
| __WEAK void | **HAL_RTC_TimestampEventCallback**(void )<br/>Timestamp callback.  |
| __WEAK void | **HAL_RTC_WakeUpTimerEventCallback**(void )<br/>Wake-up timer callback.  |
| __WEAK void | **HAL_RTC_SubSecondsUnderflowEventCallback**(void )<br/>SSRU callback.  |

## Detailed Description

Callback exported functions.  Callback functions that user can overwrite for the different interruption: 



* Alarm A
* Alarm B
* Wake-up timer
* Timestamp
* Subseconds register underflow only in Binary mode.

When rewriting the timestamp callback function, HAL_RTC_TimestampEventCallback it's necessary to call HAL_RTC_TIMESTAMP_GetDateTime or HAL_RTC_TIMESTAMP_GetBinaryTime to clear the timestamp flags (TSF, ITSF, TSOVF). 


## Functions Documentation

### function HAL_RTC_AlarmAEventCallback

```
__WEAK void HAL_RTC_AlarmAEventCallback(
    void 
)
```

Alarm A callback. 

### function HAL_RTC_AlarmBEventCallback

```
__WEAK void HAL_RTC_AlarmBEventCallback(
    void 
)
```

Alarm B callback. 

### function HAL_RTC_TimestampEventCallback

```
__WEAK void HAL_RTC_TimestampEventCallback(
    void 
)
```

Timestamp callback. 

**Note**: When rewriting this function it's necessary to call HAL_RTC_TIMESTAMP_GetDateTime or HAL_RTC_TIMESTAMP_GetBinaryTime to clear the different timestamp flags (TSF, ITSF, TSOVF) 

### function HAL_RTC_WakeUpTimerEventCallback

```
__WEAK void HAL_RTC_WakeUpTimerEventCallback(
    void 
)
```

Wake-up timer callback. 

### function HAL_RTC_SubSecondsUnderflowEventCallback

```
__WEAK void HAL_RTC_SubSecondsUnderflowEventCallback(
    void 
)
```

SSRU callback. 





-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200