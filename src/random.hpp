#pragma once

#ifdef WIN32
  #include <process.h>
#else
  #include <unistd.h>
#endif


#include <cstdlib>
#include <ctime>

void init_random_based_on_time();
void init_random(int seed);
float uniform_random();
int randid();

