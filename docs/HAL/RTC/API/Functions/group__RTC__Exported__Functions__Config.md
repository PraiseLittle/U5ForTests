---
title: RTC exported configuration functions

---

# RTC exported configuration functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Configuration functions for prescaler values and RTC mode.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| hal_status_t | **HAL_RTC_SetConfig**(const hal_rtc_config_t * p_config)<br/>Program the RTC prescalers values and calendar mode according to the specified parameters.  |
| void | **HAL_RTC_GetConfig**(hal_rtc_config_t * p_config)<br/>Retrieve the RTC prescalers values and calendar mode.  |

## Detailed Description

Configuration functions for prescaler values and RTC mode. 


# RTC clock and prescalers

The RTC clock named RTCCLK is configured by the RCC driver by using HAL_RCC_RTC_SetPeriphClockSource. The RTCCLK source can be LSE, LSI or HSE. The RTC IP has got a programmable prescaler stage which can be configured to generate a 1Hz clock. To minimize consumption, the prescaler is split into 2 programmable prescalers:

* A 7-bit asynchronous prescaler.
* A 15-bit synchronous prescaler.

When using both prescalers, it's recommended to configure the asynchronous prescaler to a high value to minimize consumption. By default, the asynchronous and synchronous are set to 128 and 256, to obtain a clock frequency of 1 Hz with a RTCCLK configured to an LSE of 32.768 kHz.

The following equations gives us the clock frequency after the first prescaler : freq_async_clk = freq_rtcclk/(1+hal_rtc_config_t::asynch_prediv)

The following equations gives us the clock frequency after the two prescalers : freq_sync_clk = freq_rtcclk/((1+ hal_rtc_config_t::asynch_prediv)(1+ hal_rtc_config_t::synch_prediv))

The values of the prescalers can be changed by calling HAL_RTC_SetConfig and setting the value of hal_rtc_config_t::asynch_prediv and hal_rtc_config_t::synch_prediv. To change the values of the prescalers, the RTC needs to be in initialization mode by calling HAL_RTC_EnterInitMode.


# RTC running modes.

RTC supports three modes of operating.

* BCD mode for Binary-Coded Decimal
* Binary mode
* Mixed mode

The mode is chosen by selecting the value of hal_rtc_config_t::mode and call the HAL_RTC_SetConfig.


## Binary-Coded Decimal mode

The BCD mode is a feature that allows the RTC to store and display time and date information in a BCD format. BCD is a way of representing decimal numbers using four bits per digit, with each digit ranging from 0 to 9.

In BCD mode the subseconds down-counter is clocked by the signal after the first prescaler. When the down-counter reaches 0, it's reloaded with the value of the synchronous prescaler. Only the first 16 bits of the subsecond register are used in BCD mode.


## Binary mode

In binary mode the subseconds down-counter is clocked by the signal after the first prescaler. The subseconds register is extended to 32-bit length and is free running. The value of the synchronous register does not care and the time and date registers are not used.

In this mode the users can use all functions that include the keyword Binary in their names, that are optimized for it.


## Mixed mode

This mode, as stated by its name, is a mix between the two previous modes. The subseconds down-counter is extended to 32 bits length and it's free running. The time and date calendar in BCD are also functional.

The down-counter is still clocked by the signal after the asynchronous prescaler but the seconds of the calendar are incremented each time the least significant bits of the subseconds register reach 0. The number of bits taken in account are defined by the user by using the HAL_RTC_SetConfig and changing the value of hal_rtc_config_t::seconds_update.

To change the RTC mode, the RTC needs to be in initialization mode by calling HAL_RTC_EnterInitMode. 


## Functions Documentation

### function HAL_RTC_SetConfig

```
hal_status_t HAL_RTC_SetConfig(
    const hal_rtc_config_t * p_config
)
```

Program the RTC prescalers values and calendar mode according to the specified parameters. 

**Parameters**:

  * **p_config** pointer to a RTC configuration instance. 


**Returns**:

  * **HAL_OK.** 
  * **HAL_INVALID_PARAM** `p_config` is NULL. 


**Warning**: 

  * The RTC configuration is write protected, use the HAL_RTC_DisableWriteProtection before calling this function. 
  * The RTC configuration shall be called when RTC is in initialization mode, use HAL_RTC_EnterInitMode to enter initialization mode. 


### function HAL_RTC_GetConfig

```
void HAL_RTC_GetConfig(
    hal_rtc_config_t * p_config
)
```

Retrieve the RTC prescalers values and calendar mode. 

**Parameters**:

  * **p_config** pointer to a RTC configuration instance. 






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200