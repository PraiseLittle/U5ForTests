---
title: RTC exported output functions

---

# RTC exported output functions

**Module:** **STM32U5xx_HAL_Driver** **/** **RTC** **/** **RTC exported functions**

Exported output functions.  More...

## Functions

|                | Name           |
| -------------- | -------------- |
| hal_status_t | **HAL_RTC_OUTPUT_SetConfigTampalarm**(const hal_rtc_output_tampalarm_config_t * p_config)<br/>Program the tampalarm configuration.  |
| void | **HAL_RTC_OUTPUT_GetConfigTampalarm**(hal_rtc_output_tampalarm_config_t * p_config)<br/>Retrieve the tampalarm configuration.  |
| hal_status_t | **HAL_RTC_OUTPUT_SetConfigCalib**(const hal_rtc_output_calib_config_t * p_config)<br/>Program the calibration output configuration.  |
| void | **HAL_RTC_OUTPUT_GetConfigCalib**(hal_rtc_output_calib_config_t * p_config)<br/>Retrieve the calibration output configuration.  |
| void | **HAL_RTC_OUTPUT_Enable**(hal_rtc_output_t output)<br/>Enable the output of the calibration signal or/and tampalarm signal.  |
| void | **HAL_RTC_OUTPUT_Disable**(void )<br/>Disable the output RTC output.  |
| hal_rtc_output_status_t | **HAL_RTC_OUTPUT_IsEnabled**(hal_rtc_output_t output)<br/>Check if the RTC output is enabled or disabled.  |

## Detailed Description

Exported output functions. 

The RTC driver controls the RTC_OUT1 GPIO functions. This pin is dedicated to RTC, TAMP functionalities and wake-up from low power modes:

* As input :
    * Standard GPIO
    * Wake-up from low power modes
    * Timestamp signal input
    * Tamper 1 input
* As output :
    * Standard GPIO
    * Tamper 2 output
    * Tampalarm signal
    * Calibration signal

The RTC_OUT2 is also used as secondary GPIO for the RTC output functionalities and wake-up from low power modes.

To enable the output signals the application shall call HAL_RTC_OUTPUT_Enable. To use the RTC_OUT1 as input all outputs shall be disabled on RTC_OUT1, therefore the application can disable all outputs by calling HAL_RTC_OUTPUT_Disable or configure the outputs on RTC_OUT2 by calling HAL_RTC_OUTPUT_Enable with hal_rtc_output_t values containing only OUT2 in their names.


# Configuration of the TAMPALARM output signal

The Tampalarm signal is a combination of the alarm, tamper or wake-up time signals. The users can choose to output these different signals almost at the same time on RTC_OUT1 or RTC_OUT2.

Depending on the user needs the polarity, the output type and the use of a pull-up can be configured by using HAL_RTC_OUTPUT_SetConfigTampalarm. When configuring the output to an open-drain, the GPIO shall be set as input by using the HAL_GPIO_Init from the GPIO driver.


# Configuration of the calibration output signal

The calibration output signal corresponds to the RTCCLK clock signal after the 6th stage of the asynchronous prescaler or the 8th stage of the synchronous prescaler (and all the asynchronous prescaler).

To choose between these two configurations, the application needs to call the HAL_RTC_OUTPUT_SetConfigCalib


## Asynchronous clock calibration

The calibration clock is the output of the 6th stage of the asynchronous prescaler. Thus, only the 6 first bits are used to define the calibration frequency. The frequency of the output is (freq_RTCCLK / (PREDIV_A5:0]+1)), PREDIV_A given by [hal_rtc_config_t::asynch_prediv.

If low power mode is disabled and the value of the asynchronous prescaler is strictly below 0x20, the calibration signal output doesn't work.

With the prescaler at default values and using LSE, the clock frequency is 512Hz.


## Synchronous clock calibration

The calibration output is the output of the 8th stage of the synchronous prescaler. Thus, only the 8 first bits are used to define the calibration frequency. The frequency of the output is (freq_RTCCLK/((PREDIV_A+1) * (PREDIV_S7:0] +1)). PREDIV_S and PREDIV_A given by [hal_rtc_config_t::synch_prediv and hal_rtc_config_t::asynch_prediv respectively.

With the prescaler at default values and using LSE, the clock frequency is 1Hz. 


## Functions Documentation

### function HAL_RTC_OUTPUT_SetConfigTampalarm

```
hal_status_t HAL_RTC_OUTPUT_SetConfigTampalarm(
    const hal_rtc_output_tampalarm_config_t * p_config
)
```

Program the tampalarm configuration. 

**Parameters**:

  * **p_config** pointer to the tampalarm configuration instance. 


**Returns**:

  * **HAL_OK** 
  * **HAL_INVALID_PARAM** when `p_config` is NULL. 


**Warning**: When configuring tampalarm in open-drain mode HAL_RTC_OUTPUT_TAMPALARM_TYPE_OPENDRAIN The RTC_OUT1 GPIO must be set to input in GPIO driver. 

### function HAL_RTC_OUTPUT_GetConfigTampalarm

```
void HAL_RTC_OUTPUT_GetConfigTampalarm(
    hal_rtc_output_tampalarm_config_t * p_config
)
```

Retrieve the tampalarm configuration. 

**Parameters**:

  * **p_config** pointer to the tampalarm configuration instance. 


### function HAL_RTC_OUTPUT_SetConfigCalib

```
hal_status_t HAL_RTC_OUTPUT_SetConfigCalib(
    const hal_rtc_output_calib_config_t * p_config
)
```

Program the calibration output configuration. 

**Parameters**:

  * **p_config** pointer to the calibration output configuration instance. 


**Returns**:

  * **HAL_OK** 
  * **HAL_INVALID_PARAM** when `p_config` is NULL. 


**Note**: 

  * When using the synchronous calibration (1Hz by default), the calibration output is the output of the 8th stage of the synchronous prescaler. Thus only the 8 first bits are used to define the calibration frequency. The frequency of the output is (f_RTCCLK/((PREDIV_A+1) * (PREDIV_S[7:0] +1)). 
  * When using the asysnchronous calibration (512Hz by default), the calibration output is the output of the asynchronous prescaler 6th stage. Thus only the 6 first bits are used to define the calibration frequency. The frequency of the output is (f_RTCCLK / (PREDIV_A[5:0]+1)). 


**Warning**: If low power mode is disabled and the value of the asynchronous prescaler hal_rtc_config_t::asynch_prediv is strictly below 0x20, the calibration signal output doesn't work. 

### function HAL_RTC_OUTPUT_GetConfigCalib

```
void HAL_RTC_OUTPUT_GetConfigCalib(
    hal_rtc_output_calib_config_t * p_config
)
```

Retrieve the calibration output configuration. 

**Parameters**:

  * **p_config** pointer to the calibration output configuration instance. 


### function HAL_RTC_OUTPUT_Enable

```
void HAL_RTC_OUTPUT_Enable(
    hal_rtc_output_t output
)
```

Enable the output of the calibration signal or/and tampalarm signal. 

**Parameters**:

  * **output** Value of hal_rtc_output_t. 


### function HAL_RTC_OUTPUT_Disable

```
void HAL_RTC_OUTPUT_Disable(
    void 
)
```

Disable the output RTC output. 

### function HAL_RTC_OUTPUT_IsEnabled

```
hal_rtc_output_status_t HAL_RTC_OUTPUT_IsEnabled(
    hal_rtc_output_t output
)
```

Check if the RTC output is enabled or disabled. 

**Parameters**:

  * **output** Value of hal_rtc_output_t representing the output configuration to be checked. 


**Returns**:

  * **hal_rtc_output_status_t::HAL_RTC_OUTPUT_DISABLED** RTC output status. 






-------------------------------

Updated on 2023-10-05 at 10:57:34 +0200