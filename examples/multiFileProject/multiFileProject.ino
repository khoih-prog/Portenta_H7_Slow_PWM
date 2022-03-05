/****************************************************************************************************************************
  multiFileProject.ino
  
  For Portenta_H7 boards
  Written by Khoi Hoang

  Built by Khoi Hoang https://github.com/khoih-prog/Portenta_H7_Slow_PWM
  Licensed under MIT license
*****************************************************************************************************************************/

// To demo how to include files in multi-file Projects

#if !( ( defined(ARDUINO_PORTENTA_H7_M7) || defined(ARDUINO_PORTENTA_H7_M4) ) && defined(ARDUINO_ARCH_MBED) )
  #error This code is intended to run on the MBED ARDUINO_PORTENTA_H7 platform! Please check your Tools->Board setting. 
#endif

#define PORTENTA_H7_SLOW_PWM_VERSION_MIN_TARGET      "Portenta_H7_Slow_PWM v1.2.1"
#define PORTENTA_H7_SLOW_PWM_VERSION_MIN             1002001

#include "multiFileProject.h"

// To be included only in main(), .ino with setup() to avoid `Multiple Definitions` Linker Error
#include "Portenta_H7_Slow_PWM.h"

void setup() 
{
  Serial.begin(115200);
  while (!Serial);
  
  Serial.println("\nStart multiFileProject");
  Serial.println(PORTENTA_H7_SLOW_PWM_VERSION);

#if defined(PORTENTA_H7_SLOW_PWM_VERSION_MIN)
  if (PORTENTA_H7_SLOW_PWM_VERSION_INT < PORTENTA_H7_SLOW_PWM_VERSION_MIN)
  {
    Serial.print("Warning. Must use this example on Version equal or later than : ");
    Serial.println(PORTENTA_H7_SLOW_PWM_VERSION_MIN_TARGET);
  }
#endif
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
