/*
  SampleDelay.h - Library for calculating a sampling delay
  Created by Derek Chafin, September 14, 2011
  Released into the public domain.
*/
#ifndef SampleDelay_h
#define SampleDelay_h

#include "WProgram.h"

class SampleDelay
{
  public:
    void start_user_code();
    int end_user_code(int ms);
  private:
    unsigned long _start_time;
    unsigned long _end_time;
};

#endif
