---
title: RTC exported calendar enumerations.

---

# RTC exported calendar enumerations.


## Types

|                | Name           |
| -------------- | -------------- |
| enum| **hal_rtc_calendar_hour_format_t** { HAL_RTC_CALENDAR_HOUR_FORMAT_24 = LL_RTC_HOUR_FORMAT_24HOUR, HAL_RTC_CALENDAR_HOUR_FORMAT_AMPM = LL_RTC_HOUR_FORMAT_AMPM}<br/>Hour formats definitions.  |
| enum| **hal_rtc_calendar_shadow_reg_bypass_t** { HAL_RTC_CALENDAR_SHADOW_REG_KEEP = LL_RTC_SHADOW_REG_KEEP, HAL_RTC_CALENDAR_SHADOW_REG_BYPASS = LL_RTC_SHADOW_REG_BYPASS}<br/>Bypass shadow register definitions.  |
| enum| **hal_rtc_calendar_reference_clock_status_t** { HAL_RTC_CALENDAR_REF_CLOCK_DISABLED = 0U, HAL_RTC_CALENDAR_REF_CLOCK_ENABLED = 1U}<br/>Reference clock definitions.  |
| enum| **hal_rtc_calendar_daylight_saving_time_status_t** { HAL_RTC_CALENDAR_WINTER_TIME = 0U, HAL_RTC_CALENDAR_SUMMER_TIME = 1U}<br/>Daylight saving time definitions.  |
| enum| **hal_rtc_calendar_it_underflow_status_t** { HAL_RTC_CALENDAR_IT_UNDERFLOW_DISABLED = 0U, HAL_RTC_CALENDAR_IT_UNDERFLOW_ENABLED = 1U}<br/>Calendar mode interruption underflow status definitions.  |

## Types Documentation

### enum hal_rtc_calendar_hour_format_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALENDAR_HOUR_FORMAT_24 | LL_RTC_HOUR_FORMAT_24HOUR|  24 hours format  |
| HAL_RTC_CALENDAR_HOUR_FORMAT_AMPM | LL_RTC_HOUR_FORMAT_AMPM|  12 hours format  |



Hour formats definitions.

### enum hal_rtc_calendar_shadow_reg_bypass_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALENDAR_SHADOW_REG_KEEP | LL_RTC_SHADOW_REG_KEEP|  Keep shadow registers  |
| HAL_RTC_CALENDAR_SHADOW_REG_BYPASS | LL_RTC_SHADOW_REG_BYPASS|  Bypass shadown registers  |



Bypass shadow register definitions.

### enum hal_rtc_calendar_reference_clock_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALENDAR_REF_CLOCK_DISABLED | 0U|  Reference clock disabled  |
| HAL_RTC_CALENDAR_REF_CLOCK_ENABLED | 1U|  Reference clock enabled  |



Reference clock definitions.

### enum hal_rtc_calendar_daylight_saving_time_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALENDAR_WINTER_TIME | 0U|  Winter time  |
| HAL_RTC_CALENDAR_SUMMER_TIME | 1U|  Summer time  |



Daylight saving time definitions.

### enum hal_rtc_calendar_it_underflow_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALENDAR_IT_UNDERFLOW_DISABLED | 0U|  Subseconds counter underflow interruption disabled  |
| HAL_RTC_CALENDAR_IT_UNDERFLOW_ENABLED | 1U|  Subseconds counter underflow interruption enabled  |



Calendar mode interruption underflow status definitions.






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200