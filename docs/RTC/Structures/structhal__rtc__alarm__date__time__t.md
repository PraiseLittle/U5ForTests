---
title: hal_rtc_alarm_date_time_t

---

# hal_rtc_alarm_date_time_t

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported types.**



Alarm time structure. 


`#include <hal_rtc.h>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| hal_rtc_time_t | **time**  |
| uint32_t | **mask**  |
| uint32_t | **subsec_mask**  |
| hal_rtc_alarm_day_type_selection_t | **mday_wday_selection**  |
| hal_rtc_alarm_day_t | **wday_mday**  |

## Public Attributes Documentation

### variable time

```cpp
hal_rtc_time_t time;
```


Specifies the time of the alarm. 


### variable mask

```cpp
uint32_t mask;
```


Specifies the alarm masks. This parameter can be a combination of RTC alarm mask defines. which includes day, hours, minutes and seconds. 


### variable subsec_mask

```cpp
uint32_t subsec_mask;
```


Specifies the alarm subseconds mask. The most significant bits starting at this bit are masked. This parameter must be a number between 0 and 63. From 32 to 63 all bits of the subseconds register are compared to activate the alarm. 


### variable mday_wday_selection

```cpp
hal_rtc_alarm_day_type_selection_t mday_wday_selection;
```


Specifies the day mode of the alarm. 


### variable wday_mday

```cpp
hal_rtc_alarm_day_t wday_mday;
```


Specifies the alarm day or day week. 


-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200