---
keywords:
    - RTC
    - Calendar
    - User sequence
    - HAL
    - STM32
    - STMicroelectronics
tags:
    - HAL
    - Drivers
---

# Calendar user sequence {#dynamic_calendar_behavior}

The following section describes the user sequence of the RTC calendar

```plantuml
@startuml

participant Application as app
participant "Real Time Clock Driver" as rtc

== RTC initialization ==

app -> rtc : HAL_RTC_DisableWriteProtection()

app -> rtc : HAL_RTC_EnterInitMode()
rtc --> app : HAL_OK

group Optionnal [If using default parameters]
app -> rtc: HAL_RTC_SetConfig(&p_config)
rtc --> app: HAL_OK
end
== Calendar initialization in BCD or mixed mode ==

group Optionnal [If using default parameters]
app -> rtc : HAL_RTC_CALENDAR_SetConfig(&p_config_calendar)
rtc -> app : HAL_OK
end

group Set time and date [choice 1]
    app -> rtc : HAL_RTC_CALENDAR_SetTime(&p_config_time)
    rtc --> app : HAL_OK

    app -> rtc : HAL_RTC_CALENDAR_SetDate(&p_config_date)
    rtc --> app : HAL_OK
end

group Set time and date [choice 2]
    app -> rtc : HAL_RTC_CALENDAR_SetDateTime(&p_config_time)
    rtc --> app : HAL_OK
end

== End Initialization ==

app -> rtc : HAL_RTC_ExitInitMode()
rtc --> app : HAL_OK

app -> rtc : HAL_RTC_EnableWriteProtection()

@enduml
```
