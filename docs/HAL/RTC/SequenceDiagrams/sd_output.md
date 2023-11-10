---
keywords:
    - RTC
    - RTC initialization
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

# Output user sequence {#dynamic_output_behavior}

The following section describes the user sequence of the output

```plantuml
@startuml

participant Application as app
participant "Real Time Clock Driver" as rtc

== Output tampalarm configuration ==

app -> rtc : HAL_RTC_OUTPUT_SetConfigTampalarm(&p_config)
rtc --> app : HAL_OK

== Output calibration configuration ==

app -> rtc : HAL_RTC_OUTPUT_SetConfigCalib(&p_config)
rtc --> app : HAL_OK

== Enable output ==

app -> rtc: HAL_RTC_OUTPUT_Enable(output)

== Disable output ==

app -> rtc : HAL_RTC_OUTPUT_Disable()

@enduml
```
