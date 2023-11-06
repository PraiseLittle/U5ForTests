---
title: hal_rtc_config_t

---

# hal_rtc_config_t

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported types.**



RTC configuration structure. 


`#include <hal_rtc.h>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| uint32_t | **asynch_prediv**  |
| uint32_t | **synch_prediv**  |
| hal_rtc_mode_t | **mode**  |
| hal_rtc_mix_mode_bcd_seconds_increment_t | **seconds_update**  |

## Public Attributes Documentation

### variable asynch_prediv

```cpp
uint32_t asynch_prediv;
```


Specifies the asynchronous prescaler value. This parameter must be a number between 0x00 and 0x7F. 


### variable synch_prediv

```cpp
uint32_t synch_prediv;
```


Specifies the synchronous prescaler value. This parameter must be a number between 0x00 and 0x7FFF. 


### variable mode

```cpp
hal_rtc_mode_t mode;
```


Specifies the RTC main mode function. 


### variable seconds_update

```cpp
hal_rtc_mix_mode_bcd_seconds_increment_t seconds_update;
```


Specifies the seconds increment from the subseconds register. 


-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200