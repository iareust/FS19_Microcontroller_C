#ifndef AMPEL_CLI_H
#define AMPEL_CLI_H

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

/* function declaration */


/*
  Print a TrafficLight with the given states one

  Parameters:
   redLightOn: bool: Set the Red Light to On (true) or off (false)
   yellowLightOn: bool: Set the Yellow Light to on (true) or off (false)
   greenLightOn: bool: Set the Green Light to on (true) or off (false)
*/
void printTrafficLight(bool redLightOn, bool yellowLightOn, bool greenLightOn);

// Print Escape Character to reset Terminal
void clearScreen(void);



#endif
