---
title: RTC exported timestamp enumerations.

---

# RTC exported timestamp enumerations.


## Types

|                | Name           |
| -------------- | -------------- |
| enum| **hal_rtc_timestamp_source_pin_edge_t** { HAL_RTC_TIMESTAMP_EDGE_RISING = LL_RTC_TIMESTAMP_EDGE_RISING, HAL_RTC_TIMESTAMP_EDGE_FALLING = LL_RTC_TIMESTAMP_EDGE_FALLING}<br/>Timestamp event on pin active edge definitions.  |
| enum| **hal_rtc_timestamp_it_status_t** { HAL_RTC_TIMESTAMP_IT_DISABLED = 0U, HAL_RTC_TIMESTAMP_IT_ENABLED = 1U}<br/>Timestamp interruption status.  |
| enum| **hal_rtc_timestamp_status_t** { HAL_RTC_TIMESTAMP_DISABLED = 0U, HAL_RTC_TIMESTAMP_ENABLED = 1U}<br/>Timestamp status.  |
| enum| **hal_rtc_timestamp_type_t** { HAL_RTC_TIMESTAMP_NO_EVENT = 0U, HAL_RTC_TIMESTAMP_SIMPLE_EVENT = LL_RTC_SR_TSF, HAL_RTC_TIMESTAMP_SIMPLE_EVENT_OVERFLOW = LL_RTC_SR_TSF | LL_RTC_SR_TSOVF, HAL_RTC_TIMESTAMP_INTERNAL_EVENT = LL_RTC_SR_ITSF | LL_RTC_SR_TSF, HAL_RTC_TIMESTAMP_INTERNAL_EVENT_OVERFLOW = LL_RTC_SR_ITSF | LL_RTC_SR_TSOVF | LL_RTC_SR_TSF}<br/>Timestamp type status.  |

## Types Documentation

### enum hal_rtc_timestamp_source_pin_edge_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_TIMESTAMP_EDGE_RISING | LL_RTC_TIMESTAMP_EDGE_RISING|  Create a timestamp event when a rising edge is detected in the input pin  |
| HAL_RTC_TIMESTAMP_EDGE_FALLING | LL_RTC_TIMESTAMP_EDGE_FALLING|  Create a timestamp event when a failling edge is detected in the input pin  |



Timestamp event on pin active edge definitions.

### enum hal_rtc_timestamp_it_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_TIMESTAMP_IT_DISABLED | 0U|  Timestamp interruption disabled  |
| HAL_RTC_TIMESTAMP_IT_ENABLED | 1U|  Timestamp interruption enabled  |



Timestamp interruption status.

### enum hal_rtc_timestamp_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_TIMESTAMP_DISABLED | 0U|  Timestamp disabled  |
| HAL_RTC_TIMESTAMP_ENABLED | 1U|  Timestamp enabled  |



Timestamp status.

### enum hal_rtc_timestamp_type_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_TIMESTAMP_NO_EVENT | 0U|  No new timestamp event  |
| HAL_RTC_TIMESTAMP_SIMPLE_EVENT | LL_RTC_SR_TSF|  Simple tumestamp event  |
| HAL_RTC_TIMESTAMP_SIMPLE_EVENT_OVERFLOW | LL_RTC_SR_TSF \| LL_RTC_SR_TSOVF|  Simple timestamp event with overflow  |
| HAL_RTC_TIMESTAMP_INTERNAL_EVENT | LL_RTC_SR_ITSF \| LL_RTC_SR_TSF|  Internal timestamp event  |
| HAL_RTC_TIMESTAMP_INTERNAL_EVENT_OVERFLOW | LL_RTC_SR_ITSF \| LL_RTC_SR_TSOVF \| LL_RTC_SR_TSF|   |



Timestamp type status.






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200