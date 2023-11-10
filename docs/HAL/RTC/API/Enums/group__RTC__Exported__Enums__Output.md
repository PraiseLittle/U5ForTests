---
title: RTC exported output enumerations

---

# RTC exported output enumerations


## Types

|                | Name           |
| -------------- | -------------- |
| enum| **hal_rtc_output_tampalarm_polarity_t** { HAL_RTC_OUTPUT_TAMPALARM_POLARITY_HIGH = LL_RTC_OUTPUTPOLARITY_PIN_HIGH, HAL_RTC_OUTPUT_TAMPALARM_POLARITY_LOW = LL_RTC_OUTPUTPOLARITY_PIN_LOW}<br/>Tamparlarm output polarity definitions.  |
| enum| **hal_rtc_output_tampalarm_type_t** { HAL_RTC_OUTPUT_TAMPALARM_TYPE_PUSHPULL = LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL, HAL_RTC_OUTPUT_TAMPALARM_TYPE_OPENDRAIN = LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN}<br/>Tampalarm output type definitions.  |
| enum| **hal_rtc_output_tampalarm_pullup_t** { HAL_RTC_OUTPUT_TAMPALARM_PULLUP_DISABLE = LL_RTC_ALARM_OUTPUT_PULLUP_NONE, HAL_RTC_OUTPUT_TAMPALARM_PULLUP_ENABLE = LL_RTC_ALARM_OUTPUT_PULLUP_ON}<br/>Tampalarm output pull-up definitions.  |
| enum| **hal_rtc_output_calibration_frequency_t** { HAL_RTC_OUTPUT_CALIBRATION_SYNCHRONOUS = LL_RTC_CALIB_FREQUENCY_1HZ, HAL_RTC_OUTPUT_CALIBRATION_ASYNCHRONOUS_DIV64 = LL_RTC_CALIB_FREQUENCY_512HZ}<br/>Calibration output frequency definitions.  |
| enum| **hal_rtc_output_t** { HAL_RTC_OUTPUT_OUT1_ALARMA = LL_RTC_ALARMOUT_ALMA, HAL_RTC_OUTPUT_OUT1_ALARMB = LL_RTC_ALARMOUT_ALMB, HAL_RTC_OUTPUT_OUT1_WAKEUP = LL_RTC_ALARMOUT_WAKEUP, HAL_RTC_OUTPUT_OUT1_TAMP = LL_RTC_OUTPUT_TAMPER_ENABLE, HAL_RTC_OUTPUT_OUT1_CALIB = LL_RTC_CALIB_OUTPUT_512HZ, HAL_RTC_OUTPUT_OUT2_ALARMA = LL_RTC_ALARMOUT_ALMA \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT2_ALARMB = LL_RTC_ALARMOUT_ALMB \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT2_WAKEUP = LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT2_TAMP = LL_RTC_OUTPUT_TAMPER_ENABLE \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT2_CALIB = LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_ALARMA_TAMP = LL_RTC_ALARMOUT_ALMA \| LL_RTC_OUTPUT_TAMPER_ENABLE, HAL_RTC_OUTPUT_OUT1_ALARMB_TAMP = LL_RTC_ALARMOUT_ALMB \| LL_RTC_OUTPUT_TAMPER_ENABLE, HAL_RTC_OUTPUT_OUT1_WAKEUP_TAMP = LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_OUTPUT_TAMPER_ENABLE, HAL_RTC_OUTPUT_OUT2_ALARMA_TAMP = LL_RTC_ALARMOUT_ALMA \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                    LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT2_ALARMB_TAMP = LL_RTC_ALARMOUT_ALMB \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                    LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT2_WAKEUP_TAMP = LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                    LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_ALARMA_OUT2_CALIB = LL_RTC_ALARMOUT_ALMA \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                          LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_ALARMB_OUT2_CALIB = LL_RTC_ALARMOUT_ALMB \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                          LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_WAKEUP_OUT2_CALIB = LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                          LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_TAMP_OUT2_CALIB = LL_RTC_OUTPUT_TAMPER_ENABLE \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                        LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_ALARMA_TAMP_OUT2_CALIB = LL_RTC_ALARMOUT_ALMA \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                               LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_ALARMB_TAMP_OUT2_CALIB = LL_RTC_ALARMOUT_ALMB \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                               LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1, HAL_RTC_OUTPUT_OUT1_WAKEUP_TAMP_OUT2_CALIB = LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                               LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1}<br/>Output definitions.  |
| enum| **hal_rtc_output_status_t** { HAL_RTC_OUTPUT_DISABLED = 0U, HAL_RTC_OUTPUT_ENABLED = 1U}<br/>Output status definitions.  |

## Types Documentation

### enum hal_rtc_output_tampalarm_polarity_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_OUTPUT_TAMPALARM_POLARITY_HIGH | LL_RTC_OUTPUTPOLARITY_PIN_HIGH|  Tampalarm output polarity is high  |
| HAL_RTC_OUTPUT_TAMPALARM_POLARITY_LOW | LL_RTC_OUTPUTPOLARITY_PIN_LOW|  Tampalarm output polarity is low  |



Tamparlarm output polarity definitions.

### enum hal_rtc_output_tampalarm_type_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_OUTPUT_TAMPALARM_TYPE_PUSHPULL | LL_RTC_ALARM_OUTPUTTYPE_PUSHPULL|  Tampalarm output is a push-pull  |
| HAL_RTC_OUTPUT_TAMPALARM_TYPE_OPENDRAIN | LL_RTC_ALARM_OUTPUTTYPE_OPENDRAIN|  Tampalarm output is an open-drain  |



Tampalarm output type definitions.

### enum hal_rtc_output_tampalarm_pullup_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_OUTPUT_TAMPALARM_PULLUP_DISABLE | LL_RTC_ALARM_OUTPUT_PULLUP_NONE|  Tampalarm output pull-up disable  |
| HAL_RTC_OUTPUT_TAMPALARM_PULLUP_ENABLE | LL_RTC_ALARM_OUTPUT_PULLUP_ON|  Tampalarm output pull-up enable  |



Tampalarm output pull-up definitions.

### enum hal_rtc_output_calibration_frequency_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_OUTPUT_CALIBRATION_SYNCHRONOUS | LL_RTC_CALIB_FREQUENCY_1HZ|  Calibration output comes from the synchronous prescaler (1Hz prescalers at default values)  |
| HAL_RTC_OUTPUT_CALIBRATION_ASYNCHRONOUS_DIV64 | LL_RTC_CALIB_FREQUENCY_512HZ|  Calibration output comes from the asynchronous prescaler (512Hz prescalers at default values)  |



Calibration output frequency definitions.

### enum hal_rtc_output_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_OUTPUT_OUT1_ALARMA | LL_RTC_ALARMOUT_ALMA|  Alarm A event is routed to output 1  |
| HAL_RTC_OUTPUT_OUT1_ALARMB | LL_RTC_ALARMOUT_ALMB|  Alarm B event is routed to output 1  |
| HAL_RTC_OUTPUT_OUT1_WAKEUP | LL_RTC_ALARMOUT_WAKEUP|  Wake-up timer event is routed to output 1  |
| HAL_RTC_OUTPUT_OUT1_TAMP | LL_RTC_OUTPUT_TAMPER_ENABLE|  Tamper event is routed to output 1  |
| HAL_RTC_OUTPUT_OUT1_CALIB | LL_RTC_CALIB_OUTPUT_512HZ|  Calibration is routed to output 1  |
| HAL_RTC_OUTPUT_OUT2_ALARMA | LL_RTC_ALARMOUT_ALMA \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm A event is routed to output 2  |
| HAL_RTC_OUTPUT_OUT2_ALARMB | LL_RTC_ALARMOUT_ALMB \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm B event is routed to output 2  |
| HAL_RTC_OUTPUT_OUT2_WAKEUP | LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Wake-up timer event is routed to output 2  |
| HAL_RTC_OUTPUT_OUT2_TAMP | LL_RTC_OUTPUT_TAMPER_ENABLE \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Tamper event is routed to output 2  |
| HAL_RTC_OUTPUT_OUT2_CALIB | LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Calibration is routed to output 2  |
| HAL_RTC_OUTPUT_OUT1_ALARMA_TAMP | LL_RTC_ALARMOUT_ALMA \| LL_RTC_OUTPUT_TAMPER_ENABLE|  Alarm A and tamper event are routed to output 1  |
| HAL_RTC_OUTPUT_OUT1_ALARMB_TAMP | LL_RTC_ALARMOUT_ALMB \| LL_RTC_OUTPUT_TAMPER_ENABLE|  Alarm B and tamper event are routed to output 1  |
| HAL_RTC_OUTPUT_OUT1_WAKEUP_TAMP | LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_OUTPUT_TAMPER_ENABLE|  Wake-up timer and tamper event are routed to output 1  |
| HAL_RTC_OUTPUT_OUT2_ALARMA_TAMP | LL_RTC_ALARMOUT_ALMA \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                    LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm A and tamper event are routed to output 2  |
| HAL_RTC_OUTPUT_OUT2_ALARMB_TAMP | LL_RTC_ALARMOUT_ALMB \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                    LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm B and tamper event are routed to output 2  |
| HAL_RTC_OUTPUT_OUT2_WAKEUP_TAMP | LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                    LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Wake-up timer and tamper event are routed to output 2  |
| HAL_RTC_OUTPUT_OUT1_ALARMA_OUT2_CALIB | LL_RTC_ALARMOUT_ALMA \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                          LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm A event is routed to output 1 and calibration to output 2  |
| HAL_RTC_OUTPUT_OUT1_ALARMB_OUT2_CALIB | LL_RTC_ALARMOUT_ALMB \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                          LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm B event is routed to output 1 and calibration to output 2  |
| HAL_RTC_OUTPUT_OUT1_WAKEUP_OUT2_CALIB | LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                          LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Wake-up timer event is routed to output 1 and calibration to output 2  |
| HAL_RTC_OUTPUT_OUT1_TAMP_OUT2_CALIB | LL_RTC_OUTPUT_TAMPER_ENABLE \| LL_RTC_CALIB_OUTPUT_512HZ \|
                                        LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Tamper event is routed to output 1 and calibration to output 2  |
| HAL_RTC_OUTPUT_OUT1_ALARMA_TAMP_OUT2_CALIB | LL_RTC_ALARMOUT_ALMA \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                               LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm A and tamper event are routed to output 1 and calibration to output 2  |
| HAL_RTC_OUTPUT_OUT1_ALARMB_TAMP_OUT2_CALIB | LL_RTC_ALARMOUT_ALMB \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                               LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Alarm B and tamper event are routed to output 1 and calibration to output 2  |
| HAL_RTC_OUTPUT_OUT1_WAKEUP_TAMP_OUT2_CALIB | LL_RTC_ALARMOUT_WAKEUP \| LL_RTC_OUTPUT_TAMPER_ENABLE \|
                                               LL_RTC_CALIB_OUTPUT_512HZ \| LL_RTC_ALARM_OUTPUT_REMAP_POS1|  Wake-up timer and tamper event are routed to output 1 and calibration to output 2  |



Output definitions.

### enum hal_rtc_output_status_t

| Enumerator | Value | Description |
| ---------- | ----- | ----------- |
| HAL_RTC_OUTPUT_DISABLED | 0U|  Output disabled  |
| HAL_RTC_OUTPUT_ENABLED | 1U|  Output enabled  |



Output status definitions.






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200