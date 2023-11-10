---
title: RTC exported wake-up timer functions

---

# RTC exported wake-up timer functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Exported wake-up timer functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| hal_status_t | **HAL_RTC_WAKEUP_SetConfig**(const hal_rtc_wakeup_config_t * p_config_wakeup_timer)<br/>Configure the RTC wake-up timer.  |
| void | **HAL_RTC_WAKEUP_GetConfig**(hal_rtc_wakeup_config_t * p_config_wakeup_timer)<br/>Retrieve the configuration of the RTC wake-up timer.  |
| hal_status_t | **HAL_RTC_WAKEUP_SetPeriod**(const hal_rtc_wakeup_period_t * p_period)<br/>Program the RTC wake-up timer auto-reload time and auto-reload clear flag time.  |
| void | **HAL_RTC_WAKEUP_GetPeriod**(hal_rtc_wakeup_period_t * p_period)<br/>Retrieve the RTC wake-up timer auto-reload and auto-reload clear value.  |
| void | **HAL_RTC_WAKEUP_Start**(uint32_t en_interruption)<br/>Start the wake-up timer.  |
| void | **HAL_RTC_WAKEUP_Stop**(void )<br/>Stops the wake-up timer.  |
| hal_status_t | **HAL_RTC_WAKEUP_PollForEvent**(uint32_t timeout_ms)<br/>Poll for wake-up timer event.  |
| hal_status_t | **HAL_RTC_WAKEUP_SetAutoReloadAndAutoClear**(uint32_t wakeup_timer_auto_reload, uint32_t wakeup_timer_auto_clear)<br/>Program the RTC wake-up timer auto-reload and auto-reload clear value in binary.  |
| uint32_t | **HAL_RTC_WAKEUP_GetAutoReload**(void )<br/>Retrieve the wake-up timer auto-reload value.  |
| uint32_t | **HAL_RTC_WAKEUP_GetAutoClear**(void )<br/>Retrieve wake-up timer auto-reload output clear value.  |

## Detailed Description

Exported wake-up timer functions. 

The wake-up timer is a 16 bits auto-reload down-counter. The wake-up timer clock input can be:

* The RTCCLK divided by a dedicated prescaler of 2,4,8,16 values.
* The synchronous clock that is configured by changing the values of the RTC prescalers hal_rtc_config_t::asynch_prediv and hal_rtc_config_t::synch_prediv.

The application needs to call HAL_RTC_WAKEUP_SetConfig and configure hal_rtc_wakeup_config_t::clock to choose the input clock of the wake-up timer. When using the synchronous clock input, the wake-up timer can behave like a 17 bits auto-reload down-counter by setting the value HAL_RTC_WAKEUP_TIMER_CLOCK_SECONDS_ADD_1BIT to hal_rtc_wakeup_config_t::clock. In this case the 16 bits down-counter reaches 0 two times, the first time it reloads automatically but triggers a wake-up event. The second time it doesn't reload automatically but also triggers a wake-up event.

By setting the parameter hal_rtc_wakeup_period_t::auto_clear_time to a non-zero value, the wake-up timer flag is cleared by hardware when the auto-reload down counter reaches this value.

If the users want to configure the wake-up timer without using physical time units, it can be done by using HAL_RTC_WAKEUP_SetAutoReloadAndAutoClear. 


## Functions Documentation

### function HAL_RTC_WAKEUP_SetConfig

```
hal_status_t HAL_RTC_WAKEUP_SetConfig(
    const hal_rtc_wakeup_config_t * p_config_wakeup_timer
)
```

Configure the RTC wake-up timer. 

**Parameters**:

  * **p_config_wakeup_timer** pointer to an RTC wake-up timer configuration instance. 


**Returns**:

  * **HAL_OK** 
  * **HAL_ERROR** If not in initialization mode and wake-up timer is started. 
  * **HAL_TIMEOUT** If not in initialization mode and WUTWF is still unset after RTC timeout duration. 
  * **HAL_INVALID_PARAM** when `p_config_wakeup_timer` is NULL. 


### function HAL_RTC_WAKEUP_GetConfig

```
void HAL_RTC_WAKEUP_GetConfig(
    hal_rtc_wakeup_config_t * p_config_wakeup_timer
)
```

Retrieve the configuration of the RTC wake-up timer. 

**Parameters**:

  * **p_config_wakeup_timer** pointer to an RTC wake-up timer configuration instance. 


### function HAL_RTC_WAKEUP_SetPeriod

```
hal_status_t HAL_RTC_WAKEUP_SetPeriod(
    const hal_rtc_wakeup_period_t * p_period
)
```

Program the RTC wake-up timer auto-reload time and auto-reload clear flag time. 

**Parameters**:

  * **p_period** pointer to an RTC wake-up timer period. 


**Returns**:

  * **HAL_OK** 
  * **HAL_ERROR** the wake-up timer is strill in use 
  * **HAL_ERROR** the wake-up timer frequency is smaller than 1Hz, use HAL_RTC_WAKEUP_SetAutoReloadAndAutoClear
  * **HAL_INVALID_PARAM** `p_period` is NULL. 
  * **HAL_ERROR** auto-roload time is shorter than auto-reaload clear flag time 
  * **HAL_ERROR** the value of the auto-reload time is too big or too small for the wake-up timer counter. 
  * **HAL_TIMEOUT** The wake-up write flag is still cleared after timeout. 


### function HAL_RTC_WAKEUP_GetPeriod

```
void HAL_RTC_WAKEUP_GetPeriod(
    hal_rtc_wakeup_period_t * p_period
)
```

Retrieve the RTC wake-up timer auto-reload and auto-reload clear value. 

**Parameters**:

  * **p_period** pointer to an RTC wake-up timer period. 


### function HAL_RTC_WAKEUP_Start

```
void HAL_RTC_WAKEUP_Start(
    uint32_t en_interruption
)
```

Start the wake-up timer. 

**Parameters**:

  * **en_interruption** Specifies the wake-up timer mode. 

* HAL_RTC_WAKEUP_IT_DISABLE
* HAL_RTC_WAKEUP_IT_ENABLE


### function HAL_RTC_WAKEUP_Stop

```
void HAL_RTC_WAKEUP_Stop(
    void 
)
```

Stops the wake-up timer. 

### function HAL_RTC_WAKEUP_PollForEvent

```
hal_status_t HAL_RTC_WAKEUP_PollForEvent(
    uint32_t timeout_ms
)
```

Poll for wake-up timer event. 

**Parameters**:

  * **timeout_ms** Timeout duration. 


**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** If WUTF is unset after timeout duration. 


### function HAL_RTC_WAKEUP_SetAutoReloadAndAutoClear

```
hal_status_t HAL_RTC_WAKEUP_SetAutoReloadAndAutoClear(
    uint32_t wakeup_timer_auto_reload,
    uint32_t wakeup_timer_auto_clear
)
```

Program the RTC wake-up timer auto-reload and auto-reload clear value in binary. 

**Parameters**:

  * **wakeup_timer_auto_reload** wake-up timer auto-reload time in binary 
  * **wakeup_timer_auto_clear** wake-up timer auto-reload clear value in binary 


**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** If WUTF is unset after timeout duration. 


### function HAL_RTC_WAKEUP_GetAutoReload

```
uint32_t HAL_RTC_WAKEUP_GetAutoReload(
    void 
)
```

Retrieve the wake-up timer auto-reload value. 

**Returns**:

  * **uint32_t** Auto-reload value 


### function HAL_RTC_WAKEUP_GetAutoClear

```
uint32_t HAL_RTC_WAKEUP_GetAutoClear(
    void 
)
```

Retrieve wake-up timer auto-reload output clear value. 

**Returns**:

  * **uint32_t** Auto-reload output clear value. 






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200