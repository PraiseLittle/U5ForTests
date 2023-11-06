---
keywords:
    - RTC
    - Timestamp
    - User sequence
    - HAL
    - STM32
    - STMicroelectronics
    - Low power
tags:
    - HAL
    - Drivers
draft: true
---

# Timestamp user sequence {#dynamic_timestamp_behavior}

The following section describes the user sequence of the timestamp

```plantuml
@startuml

participant Application as app
participant "HAL Real Time Clock Driver" as rtc
participant "Interruption" as int

== Initialization Calendar ==

app -> rtc : Initialization of Calendar

== Timestamp initializtion ==

app -> rtc : HAL_RTC_TIMESTAMP_SetConfig(&p_config_timestamp)
rtc --> app : HAL_OK

== Timestamp enable pin source ==

app -> rtc: HAL_RTC_TIMESTAMP_EnablePinSource()

== Timestamp enable internal source ==

app -> rtc: HAL_RTC_TIMESTAMP_EnableInternalSource()

== Timestamp enable tamper source ==

app -> rtc: HAL_RTC_TIMESTAMP_EnableTamperSource()

== Timestamp interruption and IRQ handler ==

group Interruption Mode

app -> rtc: HAL_RTC_TIMESTAMP_EnableIT()
rtc --> app: HAL_OK

int -> rtc : HAL_RTC_TIMESTAMP_IRQHandler(void)
end

== Retrieve timestamp event ==

group Polling Mode

    app -> rtc: HAL_RTC_TIMESTAMP_PollForEvent(timeout)
    rtc --> app: HAL_OK

    app -> rtc: HAL_RTC_TIMESTAMP_GetDateTime(&p_time, &p_date)
    rtc --> app: HAL_OK

end

@enduml
```
