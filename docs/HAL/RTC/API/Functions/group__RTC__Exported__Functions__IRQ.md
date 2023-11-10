---
title: RTC exported IRQ functions

---

# RTC exported IRQ functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

IRQ handler exported functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| void | **HAL_RTC_ALARM_IRQHandler**(void )<br/>Handle alarm interrupt request.  |
| void | **HAL_RTC_TIMESTAMP_IRQHandler**(void )<br/>Handle timestamp request.  |
| void | **HAL_RTC_WAKEUP_IRQHandler**(void )<br/>Handle wake-up timer interrupt request.  |
| void | **HAL_RTC_SubSecondsUnderflowIRQHandler**(void )<br/>Handle sub-seconds register overflow interrupt request.  |

## Detailed Description

IRQ handler exported functions. 

IRQ handler functions to manage the different interruptions:

* Alarms, there is only one function for the two alarms
* Timestamps
* Wake-up timer
* Subseconds register underflow in Binary mode. 


## Functions Documentation

### function HAL_RTC_ALARM_IRQHandler

```
void HAL_RTC_ALARM_IRQHandler(
    void 
)
```

Handle alarm interrupt request. 

### function HAL_RTC_TIMESTAMP_IRQHandler

```
void HAL_RTC_TIMESTAMP_IRQHandler(
    void 
)
```

Handle timestamp request. 

**Note**: Inside the callback it is necessary to call HAL_RTC_TIMESTAMP_GetDateTime to clear the different timestamp flags (TSF, ITSF, TSOVF). 

### function HAL_RTC_WAKEUP_IRQHandler

```
void HAL_RTC_WAKEUP_IRQHandler(
    void 
)
```

Handle wake-up timer interrupt request. 

### function HAL_RTC_SubSecondsUnderflowIRQHandler

```
void HAL_RTC_SubSecondsUnderflowIRQHandler(
    void 
)
```

Handle sub-seconds register overflow interrupt request. 





-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200