---
title: RTC exported global configuration enumerations.

---

# RTC exported global configuration enumerations.


## Types

|                | Name           |
| -------------- | -------------- |
| enum| **hal_rtc_mode_t** { HAL_RTC_MODE_BCD = LL_RTC_BINARY_NONE, HAL_RTC_MODE_BINARY = LL_RTC_BINARY_ONLY, HAL_RTC_MODE_MIX = LL_RTC_BINARY_MIX}<br/>RTC mode definitions.  |
| enum| **hal_rtc_mix_mode_bcd_seconds_increment_t** { HAL_RTC_MIX_MODE_BCD_SEC_INC_8BITS = LL_RTC_BINARY_MIX_BCDU_0, HAL_RTC_MIX_MODE_BCD_SEC_INC_9BITS = LL_RTC_BINARY_MIX_BCDU_1, HAL_RTC_MIX_MODE_BCD_SEC_INC_10BITS = LL_RTC_BINARY_MIX_BCDU_2, HAL_RTC_MIX_MODE_BCD_SEC_INC_11BITS = LL_RTC_BINARY_MIX_BCDU_3, HAL_RTC_MIX_MODE_BCD_SEC_INC_12BITS = LL_RTC_BINARY_MIX_BCDU_4, HAL_RTC_MIX_MODE_BCD_SEC_INC_13BITS = LL_RTC_BINARY_MIX_BCDU_5, HAL_RTC_MIX_MODE_BCD_SEC_INC_14BITS = LL_RTC_BINARY_MIX_BCDU_6, HAL_RTC_MIX_MODE_BCD_SEC_INC_15BITS = LL_RTC_BINARY_MIX_BCDU_7}<br/>Calendar seconds increment using the subseconds registers bits least significant bits in mixed mode definitions.  |

## Types Documentation

### enum hal_rtc_mode_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_MODE_BCD | LL_RTC_BINARY_NONE|  RTC is set to BCD mode only  |
| HAL_RTC_MODE_BINARY | LL_RTC_BINARY_ONLY|  RTC is set to binary mode only  |
| HAL_RTC_MODE_MIX | LL_RTC_BINARY_MIX|  RTC is set to mixed mode, BCD and binary mode together  |



RTC mode definitions.

### enum hal_rtc_mix_mode_bcd_seconds_increment_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_8BITS | LL_RTC_BINARY_MIX_BCDU_0|  Calendar second is incremented when SS[7:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_9BITS | LL_RTC_BINARY_MIX_BCDU_1|  Calendar second is incremented when SS[8:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_10BITS | LL_RTC_BINARY_MIX_BCDU_2|  Calendar second is incremented when SS[9:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_11BITS | LL_RTC_BINARY_MIX_BCDU_3|  Calendar second is incremented when SS[10:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_12BITS | LL_RTC_BINARY_MIX_BCDU_4|  Calendar second is incremented when SS[11:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_13BITS | LL_RTC_BINARY_MIX_BCDU_5|  Calendar second is incremented when SS[12:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_14BITS | LL_RTC_BINARY_MIX_BCDU_6|  Calendar second is incremented when SS[13:0] = 0  |
| HAL_RTC_MIX_MODE_BCD_SEC_INC_15BITS | LL_RTC_BINARY_MIX_BCDU_7|  Calendar second is incremented when SS[14:0] = 0  |



Calendar seconds increment using the subseconds registers bits least significant bits in mixed mode definitions.






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200