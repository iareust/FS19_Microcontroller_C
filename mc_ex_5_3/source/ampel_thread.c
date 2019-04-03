#include "ampel_thread.h"

static int threadRunning = 0;
static pthread_t threadId;
static pthread_attr_t threadAttr;
static int (*callbackFunction)(TrafficLightState_type);


void setAmpelThreadCallbackFunction(int (*callback)(TrafficLightState_type)){
  callbackFunction=callback;
}

// Print traffic light with green on
static void printGreenState(int durationSeconds){
  printTrafficLight(false, false, true);
  usleep(durationSeconds*1000000);

}

// Print traffic light with yellow on
static void printYellowState(int durationSeconds){
  printTrafficLight(false, true, false);
  usleep(durationSeconds*1000000);

}

// Print traffic light with red on
static void printRedState(int durationSeconds){
  printTrafficLight(true, false, false);
  usleep(durationSeconds*1000000);
}

// Prints traffic light with green on
static void printGreenBlinkingState(int durationSeconds){

  for (size_t i = 0; i < durationSeconds*2; i++) {

    printTrafficLight(false, false, true);
    usleep(250000);
    clearScreen();

    printTrafficLight(false, false, false);
    usleep(250000);
    clearScreen();
  }

}

static void printTrafficLightState(TrafficLightState_type currentTrafficLightState, int durationSeconds){

  switch (currentTrafficLightState) {
    case RED: printRedState(durationSeconds); break;
    case GREEN: printGreenState(durationSeconds); break;
    case GREEN_BLINKING: printGreenBlinkingState(durationSeconds); break;
    case YELLOW: printYellowState(durationSeconds); break;
  }
}

//t
static void* threadFunction(void* args){
  int sleepTime = 2;

  while (threadRunning){

    TrafficLightState_type currentState = getState();

    if(callbackFunction != NULL){
      sleepTime = callbackFunction(currentState);
    }else{
      sleepTime = 2;
    }

    clearScreen();
    printTrafficLightState(currentState, sleepTime);
    nextState();

  }

  printf("TrafficLight Thread was stopped\n");
  return NULL;

}

void startTrafficLight(void){

  threadRunning = 1;
  pthread_attr_init(&threadAttr);
  pthread_create(&threadId, &threadAttr, threadFunction, NULL);
}

void stopTrafficLight(void){

  threadRunning = 0;
  pthread_join(threadId, NULL);
  pthread_attr_destroy(&threadAttr);
}
