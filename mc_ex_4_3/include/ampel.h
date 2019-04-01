#ifndef STDBOOL_
#define STDBOOL_
#include <stdbool.h>
#endif

#ifndef STDIO_
#define STDIO_
#include <stdio.h>
#endif

/* function declaration */



typedef enum TrafficLightState_{RED, GREEN, GREEN_BLINKING, YELLOW}  TrafficLightState_type;

TrafficLightState_type getState();

void nextState();

void printState();
