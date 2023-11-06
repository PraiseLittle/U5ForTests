---
title: RTC exported wake-up timer enumerations.

---

# RTC exported wake-up timer enumerations.


## Types

|                | Name           |
| -------------- | -------------- |
| enum| **hal_rtc_wakeup_timer_clock_t** { HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV2 = LL_RTC_WAKEUPCLOCK_DIV_2, HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV4 = LL_RTC_WAKEUPCLOCK_DIV_4, HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV8 = LL_RTC_WAKEUPCLOCK_DIV_8, HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV16 = LL_RTC_WAKEUPCLOCK_DIV_16, HAL_RTC_WAKEUP_TIMER_CLOCK_SECONDS = LL_RTC_WAKEUPCLOCK_CKSPRE, HAL_RTC_WAKEUP_TIMER_CLOCK_SECONDS_ADD_1BIT = LL_RTC_WAKEUPCLOCK_CKSPRE_WUT}<br/>Wakeup timer clock definitions.  |

## Types Documentation

### enum hal_rtc_wakeup_timer_clock_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV2 | LL_RTC_WAKEUPCLOCK_DIV_2|  Wakeup timer decrement frequency is RTCCLK frequency divided by 2  |
| HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV4 | LL_RTC_WAKEUPCLOCK_DIV_4|  Wakeup timer decrement frequency is RTCCLK frequency divided by 4  |
| HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV8 | LL_RTC_WAKEUPCLOCK_DIV_8|  Wakeup timer decrement frequency is RTCCLK frequency divided by 8  |
| HAL_RTC_WAKEUP_TIMER_CLOCK_RTCCLK_DIV16 | LL_RTC_WAKEUPCLOCK_DIV_16|  Wakeup timer decrement frequency is RTCCLK frequency divided by 16  |
| HAL_RTC_WAKEUP_TIMER_CLOCK_SECONDS | LL_RTC_WAKEUPCLOCK_CKSPRE|  Wakeup timer decrement is based on the seconds of the calendar  |
| HAL_RTC_WAKEUP_TIMER_CLOCK_SECONDS_ADD_1BIT | LL_RTC_WAKEUPCLOCK_CKSPRE_WUT|  Wakeup timer decrement is based on the seconds of the calendar and one bit is added  |



Wakeup timer clock definitions.






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200