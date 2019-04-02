#ifndef AMPEL_CLI_H
#define AMPEL_CLI_H

#include <stdbool.h>
#include <stdio.h>

/* function declaration */


/*
  Print a TrafficLight with the given states one

  Parameters:
   redLightOn: bool: Set the Red Light to On (true) or off (false)
   yellowLightOn: bool: Set the Yellow Light to on (true) or off (false)
   greenLightOn: bool: Set the Green Light to on (true) or off (false)
*/
void printTrafficLight(bool redLightOn, bool yellowLightOn, bool greenLightOn);

/*
  Function to print the middle part of the TrafficLight
*/
void printMiddleSegment(void);

/*
  Function to print the top part of the TrafficLight
*/
void printTopSegment(void);

/*
  Function to print the bottom part of the TrafficLight
*/
void printBottomSegment(void);

/*
  Print the RedLightSegment for the redLightOn state
*/
void printRedLightOnSegment(void);

/*
  Print the RedLightSegment for the redLightOff state
*/
void printRedLightOffSegment(void);

/*
  Print the YelloLightSegment for the yellowLightOn state
*/
void printYellowLightOnSegment(void);

/*
  Print the YelloLightSegment for the yellowLightOn state
*/
void printYellowLightOffSegment(void);

/*
  Print the GreenLighSegment for the greenLightOn state
*/
void printGreenLightOnSegment(void);

/*
  Print the GreenLightSegment for the greenLightOff state
*/
void printGreenLightOffSegmetn(void);


#endif
