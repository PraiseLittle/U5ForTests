---
title: hal_rtc_wakeup_period_t

---

# hal_rtc_wakeup_period_t




Wake up time structure.


`#include <hal_rtc.h>`

## Public Attributes

|                | Name           |
| -------------- | -------------- |
| hal_rtc_time_t | **auto_reload_time**  |
| hal_rtc_time_t | **auto_clear_time**  |

## Public Attributes Documentation

### variable auto_reload_time

```cpp
hal_rtc_time_t auto_reload_time;
```


Specifies the duration of the wake-up timer auto-reload time.


### variable auto_clear_time

```cpp
hal_rtc_time_t auto_clear_time;
```


Specifies the wake-up timer auto-reload time output clear value.


-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200