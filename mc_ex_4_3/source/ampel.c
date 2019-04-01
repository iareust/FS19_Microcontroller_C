#include "ampel.h"

static TrafficLightState_type currentTrafficLightState = RED;
static const char *trafficLightStateDescribtions[] = {"red", "green", "green_blinking", "yellow"};


TrafficLightState_type getState(void){
  return currentTrafficLightState;
}

void nextState(void){

  switch (currentTrafficLightState) {
    case RED: currentTrafficLightState=GREEN; break;
    case GREEN: currentTrafficLightState=GREEN_BLINKING; break;
    case GREEN_BLINKING: currentTrafficLightState=YELLOW; break;
    case YELLOW: currentTrafficLightState=RED; break;
  }

}

void printState(void){
  const char *stateDescription = trafficLightStateDescribtions[ currentTrafficLightState ];
  printf("%s\n", stateDescription);
}
