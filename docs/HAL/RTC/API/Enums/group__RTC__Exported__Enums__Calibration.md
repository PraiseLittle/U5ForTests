---
title: RTC exported calibration enumerations.

---

# RTC exported calibration enumerations.


## Types

|                | Name           |
| -------------- | -------------- |
| enum| **hal_rtc_calibration_period_t** { HAL_RTC_CALIBRATION_PERIOD_8SEC = LL_RTC_CALIB_PERIOD_8SEC, HAL_RTC_CALIBRATION_PERIOD_16SEC = LL_RTC_CALIB_PERIOD_16SEC, HAL_RTC_CALIBRATION_PERIOD_32SEC = LL_RTC_CALIB_PERIOD_32SEC}<br/>Calibration cycle period definitions.  |
| enum| **hal_rtc_calibration_pulse_t** { HAL_RTC_CALIBRATION_PULSE_NOT_INSERTED = LL_RTC_CALIB_INSERTPULSE_NONE, HAL_RTC_CALIBRATION_PULSE_INSERTED = LL_RTC_CALIB_INSERTPULSE_SET}<br/>Calibration increase frequency definitions.  |
| enum| **hal_rtc_calibration_shift_second_t** { HAL_RTC_CALIBRATION_SHIFT_SECOND_DELAY = LL_RTC_SHIFT_SECOND_DELAY, HAL_RTC_CALIBRATION_SHIFT_SECOND_ADVANCE = LL_RTC_SHIFT_SECOND_ADVANCE}<br/>Calibration seconds shifts definitions.  |
| enum| **hal_rtc_calibration_status_t** { HAL_RTC_CALIBRATION_DISABLED = 0U, HAL_RTC_CALIBRATION_ENABLED = 1U}<br/>Calibration status definitions.  |

## Types Documentation

### enum hal_rtc_calibration_period_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALIBRATION_PERIOD_8SEC | LL_RTC_CALIB_PERIOD_8SEC|  Calibration cycle period is set to 8 seconds  |
| HAL_RTC_CALIBRATION_PERIOD_16SEC | LL_RTC_CALIB_PERIOD_16SEC|  Calibration cycle period is set to 16 seconds  |
| HAL_RTC_CALIBRATION_PERIOD_32SEC | LL_RTC_CALIB_PERIOD_32SEC|  Calibration cycle perdio is set to 32 seconds  |



Calibration cycle period definitions.

### enum hal_rtc_calibration_pulse_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALIBRATION_PULSE_NOT_INSERTED | LL_RTC_CALIB_INSERTPULSE_NONE|  No increase of the frequency  |
| HAL_RTC_CALIBRATION_PULSE_INSERTED | LL_RTC_CALIB_INSERTPULSE_SET|  Increase of the frequency by one pulse every 2^11 pulses.  |



Calibration increase frequency definitions.

### enum hal_rtc_calibration_shift_second_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALIBRATION_SHIFT_SECOND_DELAY | LL_RTC_SHIFT_SECOND_DELAY|  Delay the calendar by one second  |
| HAL_RTC_CALIBRATION_SHIFT_SECOND_ADVANCE | LL_RTC_SHIFT_SECOND_ADVANCE|  Advance the calendar by one second  |



Calibration seconds shifts definitions.

### enum hal_rtc_calibration_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_CALIBRATION_DISABLED | 0U|  Timestamp disabled  |
| HAL_RTC_CALIBRATION_ENABLED | 1U|  Timestamp enabled  |



Calibration status definitions.






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200