---
title: hal_rtc_time_t

---

# hal_rtc_time_t




Time structure structure.


`#include <hal_rtc.h>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| hal_rtc_time_format_am_pm_t | **am_pm**  |
| uint32_t | **subsec**  |
| uint32_t | **microsec**  |
| uint32_t | **millisec**  |
| uint32_t | **hour**  |
| uint32_t | **min**  |
| uint32_t | **sec**  |

## Public Attributes Documentation

### variable am_pm

```cpp
hal_rtc_time_format_am_pm_t am_pm;
```


Specifies that the time is a.m. or p.m.


### variable subsec

```cpp
uint32_t subsec;
```


Specifies the subseconds register content that can have two functions: -In BCD mode this parameter corresponds to a time unit range between0-1] second with [1 sec/(SecondFraction +1)] granularity. -This parameter corresponds to the free running 32 bit counter in Binary and Mixed mode. This field is not used by the [HAL_RTC_CALENDAR_SetTime and HAL_RTC_CALENDAR_SetDateTime functions. This parameter must be a number between 0x0 and 0x7FFF when configuring the alarm time in BCD or Mixed mode.


### variable microsec

```cpp
uint32_t microsec;
```


Specifies the time microseconds. This parameter must be a number between 0 and 999. It's only used when configuring the wake-up timer time.


### variable millisec

```cpp
uint32_t millisec;
```


Specifies the time milliseconds This parameter must be a number between 0 and 999. It's only used when configuring the wake-up timer time.


### variable hour

```cpp
uint32_t hour;
```


Specifies the time hour. This parameter must be a number between 0 and 12 if the calendar hour format is 12 hours. This parameter must be a number between 0 and 24 if the calendar hour format is 24 hours. This parameter must be a number between 0 and 36 when using it with the wake-up timer


### variable min

```cpp
uint32_t min;
```


Specifies the time minutes This parameter must be a number between 0 and 59.


### variable sec

```cpp
uint32_t sec;
```


Specifies the time seconds


-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200