/*
  SampleDelay.cpp - Library for calculating a sampling delay
  Created by Derek Chafin, September 14, 2011
  Released into the public domain.
*/

#include "WProgram.h"
#include "SampleDelay.h"

void SampleDelay::start_user_code()
{
  _start_time = millis();
}

int SampleDelay::end_user_code(int ms)
{
  _end_time = millis();
  int calc_delay = ms - (int)(_end_time - _start_time);
  
  return calc_delay > 0 ? calc_delay : 0;
}


