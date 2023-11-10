---
keywords:
    - RTC
    - Wake-up timer
    - User sequence
    - HAL
    - STM32
    - STMicroelectronics
    - Low power
tags:
    - HAL
    - Drivers
---

# Wake-up timer user sequence {#dynamic_wakeup_behavior}

The following section describes the user sequence of the wake-up timer

```plantuml
@startuml

participant Application as app
participant "Real Time Clock Driver" as rtc
participant "Interruption" as int

== Initialization Prescaler and Modes ==
group Optionnal [ Only when using the clock from the synchronous prescaler without default values]

    app -> rtc : Initialization of prescalers or mode
end

== Wake up timer initialization ==

group Oprtionnal [If using default parameters]
app -> rtc : HAL_RTC_WAKEUP_SetConfig(&p_config_wakeup_timer)
rtc --> app : HAL_OK
end

app -> rtc: HAL_RTC_WAKEUP_SetPeriod(&p_period)
rtc --> app : HAL_OK

== Start wakeup timer ==

app -> rtc : HAL_RTC_WAKEUP_Start(interruption)

== Wake up timer IRQ handler ==

group Interruption mode
int -> rtc : HAL_RTC_WakeUpTimerIRQHandler(void)
end

== Wake up timer event ==
group Polling mode
    app -> rtc : HAL_RTC_WAKEUP_PollForEvent(timeout)
    rtc --> app: HAL_OK
end

== Stop wakeup timer ==

app -> rtc : HAL_RTC_WAKEUP_Stop(void)

@enduml
```
