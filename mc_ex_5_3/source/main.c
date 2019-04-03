#include <stdio.h>
#include <stdlib.h>
#include "ampel_thread.h"


static int getTrafficLightTimeSlow(TrafficLightState_type currentTrafficLightState){
  int sleepTimeToReturn = 1;

  switch (currentTrafficLightState) {
    case RED:             sleepTimeToReturn = 3; break;
    case GREEN:           sleepTimeToReturn = 2; break;
    case GREEN_BLINKING:  sleepTimeToReturn = 2; break;
    case YELLOW:          sleepTimeToReturn = 1; break;
    default: break;
  }
  return sleepTimeToReturn;

}

static int getTrafficLightTimeFast(TrafficLightState_type currentTrafficLightState){
  int sleepTimeToReturn = 1;

  switch (currentTrafficLightState) {
    case RED:             sleepTimeToReturn = 1; break;
    case GREEN:           sleepTimeToReturn = 1; break;
    case GREEN_BLINKING:  sleepTimeToReturn = 1; break;
    case YELLOW:          sleepTimeToReturn = 1; break;
    default: break;
  }
  return sleepTimeToReturn;

}

int main(void){

  setAmpelThreadCallbackFunction(getTrafficLightTimeFast);

  printf("Start");
  startTrafficLight();
  sleep(10);
  stopTrafficLight();

  // for (;;) {}
}
