#ifndef AMPEL_H
#define AMPEL_H

#include <stdbool.h>
#include <stdio.h>


/* function declaration */


/*
  Typedefinition of the TrafficLightStates

*/
typedef enum TrafficLightState_{RED, GREEN, GREEN_BLINKING, YELLOW}  TrafficLightState_type;

/*
  Returns the current part in states

  Parameters: None
  Return: TrafficLightState_type:
*/
TrafficLightState_type getState();

/*
  Changes the TrafficLight to the next state

  Parameters: void
  Return: void
*/
void nextState();

/*
  Prints the current TrafficLightState with the printf Function

  Parameters: void
  Return: void
*/
void printState();

#endif
