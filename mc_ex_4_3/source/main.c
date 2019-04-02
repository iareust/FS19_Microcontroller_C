#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include "ampel.h"
#include "ampel_cli.h"

// Print Escape Character to reset Terminal
static void clearScreen(void){
  printf("\033c");
}

// Print traffic light with green on
static void printGreenState(float durationSeconds){
  printTrafficLight(false, false, true);
  usleep(durationSeconds*1000000);

}

// Print traffic light with yellow on
static void printYellowState(float durationSeconds){
  printTrafficLight(false, true, false);
  usleep(durationSeconds*1000000);

}

// Print traffic light with red on
static void printRedState(float durationSeconds){
  printTrafficLight(true, false, false);
  usleep(durationSeconds*1000000);
}

// Prints traffic light with green on
static void printGreenBlinkingState(int durationSeconds){

  for (size_t i = 0; i < durationSeconds*2; i++) {

    printTrafficLight(false, false, true);
    usleep(250000);
    clearScreen();

    printState();
    printTrafficLight(false, false, false);
    usleep(250000);
    clearScreen();
    printState();
  }

}

int main(void){

  while (true) {
    clearScreen();
    printState();
    TrafficLightState_type currentTrafficLightState = getState();

    switch (currentTrafficLightState) {
      case RED: printRedState(3); break;
      case GREEN: printGreenState(2); break;
      case GREEN_BLINKING: printGreenBlinkingState(2); break;
      case YELLOW: printYellowState(1); break;
    }


    nextState();
  }

  // for (;;) {}
}
