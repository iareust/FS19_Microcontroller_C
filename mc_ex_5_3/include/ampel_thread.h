#ifndef AMPEL_THREAD_H
#define AMPEL_THREAD_H

#include <stdio.h>
#include <pthread.h>
#include "ampel.h"
#include "ampel_cli.h"

/*
  Implementation of a TrafficLight with a thread.
*/

void setAmpelThreadCallbackFunction(int (*callback)(TrafficLightState_type));

void startTrafficLight(void);

void stopTrafficLight(void);


#endif
