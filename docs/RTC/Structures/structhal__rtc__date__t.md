---
title: hal_rtc_date_t

---

# hal_rtc_date_t

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported types.**



Date structure structure. 


`#include <hal_rtc.h>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| hal_rtc_weekday_t | **wday**  |
| hal_rtc_month_t | **mon**  |
| uint32_t | **mday**  |
| uint32_t | **year**  |

## Public Attributes Documentation

### variable wday

```cpp
hal_rtc_weekday_t wday;
```


Specifies the week day. 


### variable mon

```cpp
hal_rtc_month_t mon;
```


Specifies the month. 


### variable mday

```cpp
uint32_t mday;
```


Specifies the day. This parameter must be a number between 1 and 31. 


### variable year

```cpp
uint32_t year;
```


Specifies the year. This parameter must be a number between 0 and 99. 


-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200