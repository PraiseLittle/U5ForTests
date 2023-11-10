---
title: RTC exported time stamp functions

---

# RTC exported time stamp functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Exported timestamp functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| hal_status_t | **HAL_RTC_TIMESTAMP_SetConfig**(const hal_rtc_timestamp_config_t * p_config_timestamp)<br/>Configure the RTC timestamp.  |
| void | **HAL_RTC_TIMESTAMP_GetConfig**(hal_rtc_timestamp_config_t * p_config_timestamp)<br/>Retrieve the RTC timestamp configuration.  |
| void | **HAL_RTC_TIMESTAMP_EnablePinSource**(void )<br/>Enable the RTC timestamp from the external pin.  |
| void | **HAL_RTC_TIMESTAMP_DisablePinSource**(void )<br/>Disable the RTC timestamp from the external pin.  |
| hal_rtc_timestamp_status_t | **HAL_RTC_TIMESTAMP_IsEnabledPinSource**(void )<br/>Check if the RTC timestamps from the external pin is enabled.  |
| void | **HAL_RTC_TIMESTAMP_EnableInternalSource**(void )<br/>Enable the RTC timestamp from the internal event.  |
| void | **HAL_RTC_TIMESTAMP_DisableInternalSource**(void )<br/>Disable the RTC timestamp from the internal event.  |
| hal_rtc_timestamp_status_t | **HAL_RTC_TIMESTAMP_IsEnabledInternalSource**(void )<br/>Check if the RTC timestamp from the internal event is enabled.  |
| void | **HAL_RTC_TIMESTAMP_EnableTamperSource**(void )<br/>Enable the RTC timestamp from the tamper events.  |
| void | **HAL_RTC_TIMESTAMP_DisableTamperSource**(void )<br/>Disable the RTC timestamp from the tamper events.  |
| hal_rtc_timestamp_status_t | **HAL_RTC_TIMESTAMP_IsEnabledTamperSource**(void )<br/>Check if the RTC timestamp from the tamper events is enabled.  |
| void | **HAL_RTC_TIMESTAMP_EnableIT**(void )<br/>Enable the RTC timestamp interrupt.  |
| void | **HAL_RTC_TIMESTAMP_DisableIT**(void )<br/>Disable the RTC timestamp interrupt.  |
| hal_rtc_timestamp_it_status_t | **HAL_RTC_TIMESTAMP_IsEnabledIT**(void )<br/>Check if the RTC timestamp interrupt is enabled.  |
| hal_status_t | **HAL_RTC_TIMESTAMP_GetDateTime**(hal_rtc_time_t * p_time, hal_rtc_date_t * p_date, hal_rtc_timestamp_type_t * p_timestamp_type)<br/>Retrieve the RTC timestamp time and the type of the timestamp.  |
| hal_status_t | **HAL_RTC_TIMESTAMP_PollForEvent**(uint32_t timeout_ms)<br/>Poll for timestamp event.  |
| void | **HAL_RTC_TIMESTAMP_GetBinaryTime**(uint32_t * p_time_subseconds, hal_rtc_timestamp_type_t * p_timestamp_type)<br/>Retrieve the RTC timestamp subsecond register value.  |

## Detailed Description

Exported timestamp functions. 

A timestamp can be triggered by 3 different sources:

* When RTC_OUT1 is configured as input, a change in the signal depending on the polarity configured in hal_rtc_timestamp_config_t::input_edge_polarity.
* A switch to the VBat supply
* An internal or external tamper event is detected.

After a timestamp event, by calling the HAL_RTC_TIMESTAMP_GetDateTime, the application retrieves the date and time of the last timestamp event and resets the timestamp. If HAL_RTC_TIMESTAMP_GetDateTime is not called after a timestamp and a new one occurs, there is an overflow. In that case the date and time of the timestamp are the ones of the first timestamp. Resetting the timestamp resets the date and time, that is why HAL_RTC_TIMESTAMP_GetDateTime resets the timestamp.

HAL_RTC_TIMESTAMP_GetDateTime function also retrieves the type of the timestamp which can be of 5 types:

* HAL_RTC_TIMESTAMP_NO_EVENT : No new timestamp occurred
* HAL_RTC_TIMESTAMP_SIMPLE_EVENT : A timestamp event occurred, it can come from a tamper or the pin
* HAL_RTC_TIMESTAMP_SIMPLE_EVENT_OVERFLOW : At least two timestamp occurred since last timestamp, it's an overflow.
* HAL_RTC_TIMESTAMP_INTERNAL_EVENT : An internal timestamp event occurred
* HAL_RTC_TIMESTAMP_INTERNAL_EVENT_OVERFLOW : At least two timestamp occurred and one of them

When using binary mode only the subseconds register is saved. A dedicated API is given to optimize the code. 


## Functions Documentation

### function HAL_RTC_TIMESTAMP_SetConfig

```
hal_status_t HAL_RTC_TIMESTAMP_SetConfig(
    const hal_rtc_timestamp_config_t * p_config_timestamp
)
```

Configure the RTC timestamp. 

**Parameters**:

  * **p_config_timestamp** pointer to an RTC timestamp configuration instance. 


**Returns**:

  * **HAL_OK** 
  * **HAL_INVALID_PARAM** when `p_config_timestamp` is NULL. 


### function HAL_RTC_TIMESTAMP_GetConfig

```
void HAL_RTC_TIMESTAMP_GetConfig(
    hal_rtc_timestamp_config_t * p_config_timestamp
)
```

Retrieve the RTC timestamp configuration. 

**Parameters**:

  * **p_config_timestamp** pointer to an RTC timestamp configuration instance. 


### function HAL_RTC_TIMESTAMP_EnablePinSource

```
void HAL_RTC_TIMESTAMP_EnablePinSource(
    void 
)
```

Enable the RTC timestamp from the external pin. 

### function HAL_RTC_TIMESTAMP_DisablePinSource

```
void HAL_RTC_TIMESTAMP_DisablePinSource(
    void 
)
```

Disable the RTC timestamp from the external pin. 

### function HAL_RTC_TIMESTAMP_IsEnabledPinSource

```
hal_rtc_timestamp_status_t HAL_RTC_TIMESTAMP_IsEnabledPinSource(
    void 
)
```

Check if the RTC timestamps from the external pin is enabled. 

**Returns**:

  * **hal_rtc_timestamp_status_t** RTC timestamp from the external pin status. 


### function HAL_RTC_TIMESTAMP_EnableInternalSource

```
void HAL_RTC_TIMESTAMP_EnableInternalSource(
    void 
)
```

Enable the RTC timestamp from the internal event. 

### function HAL_RTC_TIMESTAMP_DisableInternalSource

```
void HAL_RTC_TIMESTAMP_DisableInternalSource(
    void 
)
```

Disable the RTC timestamp from the internal event. 

### function HAL_RTC_TIMESTAMP_IsEnabledInternalSource

```
hal_rtc_timestamp_status_t HAL_RTC_TIMESTAMP_IsEnabledInternalSource(
    void 
)
```

Check if the RTC timestamp from the internal event is enabled. 

**Returns**:

  * **hal_rtc_timestamp_status_t** RTC timestamp from the external pin status 


### function HAL_RTC_TIMESTAMP_EnableTamperSource

```
void HAL_RTC_TIMESTAMP_EnableTamperSource(
    void 
)
```

Enable the RTC timestamp from the tamper events. 

### function HAL_RTC_TIMESTAMP_DisableTamperSource

```
void HAL_RTC_TIMESTAMP_DisableTamperSource(
    void 
)
```

Disable the RTC timestamp from the tamper events. 

### function HAL_RTC_TIMESTAMP_IsEnabledTamperSource

```
hal_rtc_timestamp_status_t HAL_RTC_TIMESTAMP_IsEnabledTamperSource(
    void 
)
```

Check if the RTC timestamp from the tamper events is enabled. 

**Returns**:

  * **hal_rtc_timestamp_status_t** RTC timestamp from the external pin status. 


### function HAL_RTC_TIMESTAMP_EnableIT

```
void HAL_RTC_TIMESTAMP_EnableIT(
    void 
)
```

Enable the RTC timestamp interrupt. 

### function HAL_RTC_TIMESTAMP_DisableIT

```
void HAL_RTC_TIMESTAMP_DisableIT(
    void 
)
```

Disable the RTC timestamp interrupt. 

### function HAL_RTC_TIMESTAMP_IsEnabledIT

```
hal_rtc_timestamp_it_status_t HAL_RTC_TIMESTAMP_IsEnabledIT(
    void 
)
```

Check if the RTC timestamp interrupt is enabled. 

**Returns**:

  * **hal_rtc_timestamp_it_status_t** RTC timestamp interrupt status. 


### function HAL_RTC_TIMESTAMP_GetDateTime

```
hal_status_t HAL_RTC_TIMESTAMP_GetDateTime(
    hal_rtc_time_t * p_time,
    hal_rtc_date_t * p_date,
    hal_rtc_timestamp_type_t * p_timestamp_type
)
```

Retrieve the RTC timestamp time and the type of the timestamp. 

**Parameters**:

  * **p_time** pointer to a RTC timestamp time instance. 
  * **p_date** pointer to a RTC timestamp date instance. 
  * **p_timestamp_type** pointer to a hal_rtc_timestamp_type_t type value. It is used to retrieve the type of the timestamp. 


**Returns**:

  * **HAL_OK** 
  * **HAL_INVALID_PARAM** when `p_date` or p_time are NULL. 


### function HAL_RTC_TIMESTAMP_PollForEvent

```
hal_status_t HAL_RTC_TIMESTAMP_PollForEvent(
    uint32_t timeout_ms
)
```

Poll for timestamp event. 

**Parameters**:

  * **timeout_ms** Timeout duration 


**Returns**:

  * **HAL_OK** 
  * **HAL_TIMEOUT** if timeout is reached 


### function HAL_RTC_TIMESTAMP_GetBinaryTime

```
void HAL_RTC_TIMESTAMP_GetBinaryTime(
    uint32_t * p_time_subseconds,
    hal_rtc_timestamp_type_t * p_timestamp_type
)
```

Retrieve the RTC timestamp subsecond register value. 

**Parameters**:

  * **p_time_subseconds** pointer to an uint32_t to retrieve the value of the subseconds of the timestamp. 
  * **p_timestamp_type** pointer to a hal_rtc_timestamp_type_t type value. It is used to retrieve the type of the timestamp. 






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200