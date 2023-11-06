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

# RTC initialization user sequence {#dynamic_init_behavior}

```plantuml
The following section describes the user sequence of the RTC initialization

@startuml
participant Application as app
participant "System Drivers" as driv

== Initialization ==

app -> driv: HAL_init()
driv --> app

app -> driv: Configure GPIO, NVIC
driv --> app


app -> driv: Configure system clock
driv --> app

app -> driv: Power driver disable write\n protection on backup domain (PWR_DBPR DBP)
driv --> app


@enduml
```
