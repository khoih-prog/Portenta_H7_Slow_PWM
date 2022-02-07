/****************************************************************************************************************************
  Portenta_H7_Slow_PWM.h
  For Portenta_H7 boards
  Written by Khoi Hoang

  Built by Khoi Hoang https://github.com/khoih-prog/Portenta_H7_Slow_PWM
  Licensed under MIT license

  Now even you use all these new 16 ISR-based timers,with their maximum interval practically unlimited (limited only by
  unsigned long miliseconds), you just consume only one Portenta_H7 STM32 timer and avoid conflicting with other cores' tasks.
  The accuracy is nearly perfect compared to software timers. The most important feature is they're ISR-based timers
  Therefore, their executions are not blocked by bad-behaving functions / tasks.
  This important feature is absolutely necessary for mission-critical tasks.

  Version: 1.2.0

  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.0.0   K.Hoang      22/09/2021 Initial coding for Portenta_H7
  1.1.0   K Hoang      10/11/2021 Add functions to modify PWM settings on-the-fly
  1.2.0   K.Hoang      22/01/2022 Fix `multiple-definitions` linker error. Improve accuracy. Optimize code. Fix bug
*****************************************************************************************************************************/

#pragma once

#ifndef PORTENTA_H7_SLOW_PWM_H
#define PORTENTA_H7_SLOW_PWM_H

#include "Portenta_H7_Slow_PWM.hpp"
#include "Portenta_H7_Slow_PWM_ISR.h"

#endif    // PORTENTA_H7_SLOW_PWM_H

