/*
This list the color to use for your hal_status_t return code and states transitions.
@startuml
   start
   #49b170:<b>return HAL_OK</b>;
   #ffd200:<b>return HAL_BUSY</b>;
   #8c0078:<font color="white"><b>return HAL_INVALID_PARAM</b></font>;
   #e6007e:<font color="white"><b>return HAL_TIMEOUT</b></font>;
   #e6007e:<font color="white"><b>return HAL_ERROR</b></font>;
   #3cb4e6:<b>return FunctionCall()</b>;
   #ceecf9:<b>State = INIT</b>\\
   stop
@enduml
*/

/*! \fn void HAL_RTC_EnableWriteProtection(void)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_DisableWriteProtection(void)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_EnterInitMode(void)
  @startuml
  start
  if (LL_RTC_IsActiveFlag_INIT) then (=0)
    :LL_RTC_EnableInitMode;
    while (LL_RTC_IsActiveFlag_INIT) is (=0)
      if (HAL_GetTick() - tickstart) then (> RTC_TIMEOUT_VALUE)
        #e6007e:return HAL_TIMEOUT;
        end
      endif
    endwhile
  else (=1)
  endif
  #49b170: return HAL_OK;
  end
  @enduml
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_ExitInitMode(void)
  @startuml
  start
  :status = HAL_OK;
  :LL_RTC_DisableInitMode;
  if (LL_RTC_IsShadowRegBypassEnabled) then (=0)
    if (RTC_WaitSynchro_RS ) then (= HAL_TIMEOUT)
      #e6007e: return HAL_TIMEOUT;
      end
    else (= HAL_OK)
    endif
  else (=1)
    :LL_RTC_DisableShadowRegBypass;
    if (RTC_WaitSynchro_RS ) then (= HAL_TIMEOUT)
      :status = HAL_TIMEOUT;
    else (= HAL_OK)
    endif
    :LL_RTC_EnableShadowRegBypass;
  endif
  #49b170:return status;
  end
  @enduml
  @hidecallergraph
  @hidecallgraph
*/


/*! \fn hal_status_t HAL_RTC_SetConfig(const hal_rtc_config_t *p_config)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_GetConfig(hal_rtc_config_t *p_config)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_EnableUltraLowPowerMode(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_DisableUltraLowPowerMode(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_ultra_low_power_mode_status_t HAL_RTC_IsEnabledUltraLowPowerMode(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_CALENDAR_SetConfig(const hal_rtc_calendar_config_t *p_config_calendar)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_GetConfig(hal_rtc_calendar_config_t *p_config_calendar)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_CALENDAR_SetDateTime(const hal_rtc_date_t *p_date, const hal_rtc_time_t *p_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_GetDateTime(hal_rtc_date_t *p_date, hal_rtc_time_t *p_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_CALENDAR_SetTime(const hal_rtc_time_t *p_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_GetTime(hal_rtc_time_t *p_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_CALENDAR_SetDate(const hal_rtc_date_t *p_date)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_GetDate(hal_rtc_date_t *p_date)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_EnableReferenceClock(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_DisableReferenceClock(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_calendar_reference_clock_status_t HAL_RTC_CALENDAR_IsEnabledReferenceClock(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_SetSummerTimeBit(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_SetWinterTimeBit(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_calendar_daylight_saving_time_status_t HAL_RTC_CALENDAR_GetDaylightSavingTime(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_AddOneHour(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_SubtractOneHour(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t HAL_RTC_CALENDAR_GetBinaryTime(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_EnableITSubSecondsUnderflow(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_CALENDAR_DisableITSubSecondsUnderflow(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_calendar_it_underflow_status_t HAL_RTC_CALENDAR_IsEnabledITSubSecondsUnderflow(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_OUTPUT_SetConfigTampalarm(const hal_rtc_output_tampalarm_config_t  *p_config)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_OUTPUT_GetConfigTampalarm(hal_rtc_output_tampalarm_config_t  *p_config)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_OUTPUT_SetConfigCalib(const hal_rtc_output_calib_config_t *p_config)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_OUTPUT_GetConfigCalib(hal_rtc_output_calib_config_t *p_config)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_OUTPUT_Enable(hal_rtc_output_t output)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_OUTPUT_Disable(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_output_status_t HAL_RTC_OUTPUT_IsEnabled(hal_rtc_output_t output)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_EnableCalibration(hal_rtc_calibration_period_t calibration_period,
                                          hal_rtc_calibration_pulse_t pulse_add,
                                          uint32_t subtracted_pulses)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_DisableCalibration(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_ShiftCalibration(hal_rtc_calibration_shift_second_t add_one_sec,
                                              uint32_t fraction_sec_to_subtract)
  @startuml
  start
    if (USE_ASSERT_DBG_PARAM) then (=1)
      :assert_dbg_param(IS_RTC_CALIBRATION_SHIFT_SECOND);
      :assert_dbg_param(IS_RTC_CALIBRATION_SHIFT_FRACTIONS);
    else (=0)
    endif

    if (LL_RTC_GetBinaryMode) then (= LL_RTC_BINARY_NONE)
      if (LL_RTC_TIME_GetSubSecond >> 15 ) then (= 1)
        #e6007e:return HAL_ERROR;
        end
      else (= 0)
      endif
      if (LL_RTC_IsRefClockEnabled) then (= 1)
       #e6007e:return HAL_ERROR;
       end
      else (= 0)
      endif
    elseif (LL_RTC_GetBinaryMode) then (= LL_RTC_BINARY_MIX)
      :bcd_increment = LL_RTC_GetBinMixBCDU(RTC) + 8;
      if ((fraction_sec_to_subtract >> (bcd_increment)) then (!= 0)
        #e6007e:return HAL_ERROR;
        end
      else ( = 0)
      endif
      if ((LL_RTC_TIME_GetSubSecond(RTC) >> (bcd_increment)) then (= 1 )
        #e6007e:return HAL_ERROR;
        end
      else ( = 0)
      endif
    else (= LL_RTC_BINARY_ONLY)
    endif

    if (RTC_WaitSynchro_SHP) then (= HAL_TIMEOUT)
      #e6007e:return HAL_TIMEOUT;
      end
    endif

    :LL_RTC_TIME_Synchronize;

    #49b170:return RTC_WaitSynchro_RS;
    end
    @enduml
    @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_ALARM_SetConfig(hal_rtc_alarm_t alarm, const hal_rtc_alarm_config_t *p_config_alarm)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_ALARM_GetConfig(hal_rtc_alarm_t alarm, hal_rtc_alarm_config_t *p_config_alarm)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_ALARM_SetDateTime(hal_rtc_alarm_t alarm, const hal_rtc_alarm_date_time_t * p_date_time)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_ALARM_GetDateTime(hal_rtc_alarm_t alarm, hal_rtc_alarm_date_time_t * p_date_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_ALARM_Start(hal_rtc_alarm_t alarm, uint32_t en_interruption)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_ALARM_Stop(hal_rtc_alarm_t alarm)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_ALARM_PollForEvent(hal_rtc_alarm_t alarm, uint32_t timeout_ms )
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_ALARM_SetBinaryTime(hal_rtc_alarm_t alarm, uint32_t alarm_subsecond)
  @hidecallergraph
  @hidecallgraph
  */


/*! \fn uint32_t HAL_RTC_ALARM_GetBinaryTime(hal_rtc_alarm_t alarm)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_ALARM_SetBinarySubSecondMask(hal_rtc_alarm_t alarm, uint32_t alarm_subsecond_mask)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t HAL_RTC_ALARM_GetBinarySubSecondMask(hal_rtc_alarm_t alarm)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_TIMESTAMP_SetConfig(const hal_rtc_timestamp_config_t *p_config_timestamp)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_GetConfig(hal_rtc_timestamp_config_t *p_config_timestamp)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_EnablePinSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_DisablePinSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_timestamp_status_t HAL_RTC_TIMESTAMP_IsEnabledPinSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_EnableInternalSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_DisableInternalSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_timestamp_status_t HAL_RTC_TIMESTAMP_IsEnabledInternalSource()
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_EnableTamperSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_DisableTamperSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_timestamp_status_t HAL_RTC_TIMESTAMP_IsEnabledTamperSource(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_EnableIT(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_DisableIT(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_rtc_timestamp_it_status_t HAL_RTC_TIMESTAMP_IsEnabledIT(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_TIMESTAMP_GetDateTime(hal_rtc_time_t *p_time,
                                                               hal_rtc_date_t *p_date,
                                                               hal_rtc_timestamp_type_t * p_timestamp_type)

  @startuml
    start
    if (USE_ASSERT_DBG_PARAM) then (=1)
      :assert_dbg_param(p_time != NULL);
      :assert_dbg_param(p_date != NULL);
    else (=0)
    endif

    if (USE_HAL_CHECK_PARAM) then (=1)
      if (p_date || p_time) then (= NULL)
        #8c0078:return HAL_INVALID_PARAM;
        end
      else (= !NULL)
      endif
    else (= 0)
    endif
    :LL_RTC_TS_GetTimeAndFormat;
    :LL_RTC_TS_GetDate;

    :type = HAL_RTC_TIMESTAMP_NO_EVENT;

    if (LL_RTC_IsActiveFlag_TS) then (= 1)
      :type = LL_RTC_GetActiveFlags_TS;
      if (LL_RTC_IsActiveFlag_TSOV) then (= 1)
        :LL_RTC_ClearFlag_TSOV;
      else (= 0)
      endif
      if (LL_RTC_IsActiveFlag_ITS)  then (= 1)
        :LL_RTC_ClearFlag_ITS;
      else (= 0)
      endif
    else (= 0)
    endif

    #49b170:return type;
    end
    @enduml
    @hidecallergraph
  @hidecallgraph
  */


/*! \fn hal_status_t HAL_RTC_TIMESTAMP_PollForEvent(uint32_t timeout_ms)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_GetBinaryTime( uint32_t * p_time_subseconds, hal_rtc_timestamp_type_t *p_timestamp_type )
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_WAKEUP_SetConfig(const hal_rtc_wakeup_config_t *p_config_wakeup_timer)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_WAKEUP_GetConfig(hal_rtc_wakeup_config_t *p_config_wakeup_timer)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_WAKEUP_SetPeriod(const hal_rtc_wakeup_period_t * p_period)
  @startuml
  start
  if (LL_RTC_WAKEUP_IsEnabled) then (= 1)
    #e6007e: return HAL_ERROR;
    end
  else (= 0)
  endif

  if (USE_ASSERT_DBG_PARAM) then (=1)
    :assert_dbg_param(IS_RTC_HOUR_36 - wakeup);
    :assert_dbg_param(IS_RTC_MIN - wakeup);
    :assert_dbg_param(IS_RTC_SEC - wakeup);
    :assert_dbg_param(IS_RTC_NANOSEC - wakeup);
    :assert_dbg_param(IS_RTC_HOUR_36 - clear_wakeup);
    :assert_dbg_param(IS_RTC_MIN - clear_wakeup);
    :assert_dbg_param(IS_RTC_SEC - clear_wakeup);
    :assert_dbg_param(IS_RTC_NANOSEC - clearwakeup);
  else (=0)
  endif



  if (USE_HAL_CHECK_PARAM) then (=1)
    if (p_period) then (= NULL)
      #8c0078:return HAL_INVALID_PARAM;
      end
    else (= !NULL)
    endif
  else (= 0)
  endif

  if (sec_clear_wakeup > sec_wakeup ||(sec_clear_wakeup == sec_wakeup && nanosec_clear_wakeup > nanosec_wakeup)) then (yes)
    #e6007e: return HAL_ERROR;
    end
  else (no)
  endif

  : Retrieve Wake-up timer frequency;

  if (frequency_wakeup) then (= 0)
    #e6007e: return HAL_ERROR;
    end
  else (= 1)
  endif

  if (clock_wakeup) then (= HAL_RTC_WAKEUP_TIMER_CLOCK_SECONDS_ADD_1BIT)
    :calculate the max and min seconds for 17 bits. (Min will be 0x10000);
  else (= OTHERS)
    :calculate the max and min seconds for 16 bits;
  endif

  if (seconds_wakeup >= max_seconds || seconds_wakeup =< min_seconds) then (yes)
    #e6007e:return HAL_ERROR;
    end
  else (no)
  endif

  :Convert the wakeup and the clear wakeup time values into bits;

  if (RTC_WaitSynchro_WUTW) then (= HAL_TIMEOUT)
    #e6007e:return HAL_TIMEOUT;
    end
  else (= HAL_OK)
  endif

  :Set the Wakeup and clear wakeup values;

  #green: return HAL_OK;
  end
  @enduml
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_WAKEUP_GetPeriod(hal_rtc_wakeup_period_t* p_period)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_WAKEUP_Start(uint32_t en_interruption)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_WAKEUP_Stop(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_WAKEUP_PollForEvent(uint32_t timeout_ms)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t HAL_RTC_WAKEUP_SetAutoReloadAndAutoClear(uint32_t wakeup_timer_auto_reload, uint32_t wakeup_timer_auto_clear )
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t HAL_RTC_WAKEUP_GetAutoReload(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t HAL_RTC_WAKEUP_GetAutoClear(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_ALARM_IRQHandler(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_TIMESTAMP_IRQHandler()
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_WAKEUP_IRQHandler()
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void HAL_RTC_SubSecondsUnderflowEventCallback()
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn __weak void HAL_RTC_AlarmAEventCallback(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn __weak void HAL_RTC_AlarmBEventCallback(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn __weak void HAL_RTC_TimestampEventCallback(void)
  @hidecallergraph
  @hidecallgraph
  */


/*! \fn __weak void HAL_RTC_WakeUpTimerEventCallback(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn __weak void HAL_RTC_SubSecondsUnderflowIRQHandler(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t RTC_WaitSynchro_RS(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t RTC_WaitSynchro_SHP(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t RTC_WaitSynchro_RECALP(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn hal_status_t RTC_WaitSynchro_WUTW(void)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn __STATIC_INLINE uint32_t RTC_DecimalToBCD(uint32_t value)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn __STATIC_INLINE uint32_t RTC_BCDToDecimal(uint32_t value)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void RTC_SetTime(const hal_rtc_time_t *p_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void RTC_SetDate(const hal_rtc_date_t *p_date)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void RTC_GetTime( hal_rtc_time_t *p_time)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn void RTC_GetDate( hal_rtc_date_t *p_date)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t RTC_GetWakeUpClockFrequency(hal_rtc_wakeup_timer_clock_t clock_prescaler_wakeup)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t RTC_GetRTCClockFrequencyCalibrated(void)
  @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t RTC_GetRTCClockFrequencyAfterPrescalerS(uint32_t frequency)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t RTC_GetRTCClockFrequencyAfterPrescalerA(uint32_t frequency)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t RTC_ConvertSecSubsecToBits(uint32_t seconds, uint32_t nanoseconds, uint32_t frequency)
   @hidecallergraph
  @hidecallgraph
  */

/*! \fn uint32_t RTC_ConvertBitsToTime(hal_rtc_time_t* p_time, uint32_t bits, uint32_t frequency)
   @hidecallergraph
  @hidecallgraph
  */