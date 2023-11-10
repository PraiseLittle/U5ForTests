---
keywords:
    - RTC
    - Component diagram
    - HAL
    - STM32
    - STMicroelectronics
tags:
    - HAL
    - Drivers
draft: true
---

# RTC Component Diagram {#component_diagram}

phrase explicative

```plantuml
@startuml
<style>
componentDiagram {
   arrow {
      FontSize 8
   }
}
</style>

title RTC Software Component Diagram

package "HAL" {
    [HAL_SERVICE]
    [HAL_RTC]
    [HAL_RCC]
}

package "Low Layer" {
    [LL_RTC]
    [CMSIS]
    [RTC Interrupt routine service]
}

package "HW" {
    [STM32_HW]
}

[Appli] --> [HAL_RTC] : HAL RTC API
[Appli] <-- [HAL_RTC] : RTC callback
[HAL_RTC] --> [LL_RTC] : LL RTC API
[HAL_RTC] --> [HAL_RCC] : RTC Clock
[HAL_RTC] -l-> [HAL_SERVICE] : HAL_GetTick
[HAL_RTC] <-l- [HAL_SERVICE] : HAL_SetTick
[HAL_RTC] <-- [RTC Interrupt routine service]
[LL_RTC] --> [CMSIS]:RTC register def
[STM32_HW] -u--> [RTC Interrupt routine service]: RTCx Irq
[STM32_HW] <-u-- [LL_RTC] : RTC registers R/W
@enduml
```
