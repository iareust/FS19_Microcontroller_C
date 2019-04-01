#include "ampel_cli.h"

// Color Definitions
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[0;31m"
#define KBOLDRED "\x1B[1;31m"
#define KGREEN "\x1B[0;32m"
#define KBOLDGREEN "\x1B[1;32m"
#define KYELLOW "\x1B[0;33m"
#define KBOLDYELLOW "\x1B[1;33m"


void printTopSegment(void){
  printf("                       ##\n");
  printf("                      _[]_\n");
  printf("                     [____]\n");
  printf("                 .----'  '----.\n");
  printf("             .===|    .==.    |===.\n");
}

void printMiddleSegment(void){
  printf("             '===|    `\"\"`    |==='\n");
printf("             .===|    .==.    |===.\n");

}

void printBottomSegment(void){
  printf("             '===|    `\"\"`    |==='\n");
  printf("          jgs    '--.______.--'\n");
}

void printRedLightOnSegment(void){

  printf(KNRM "             \\   |   /" KBOLDRED "####" KNRM "\\   |   /\n");
  printf(KNRM "             \\   |   \\" KBOLDRED "####" KNRM "/   |   /\n");

}

void printRedLightOffSegment(void){

  printf(KNRM "             \\   |   /" KRED "''''" KNRM "\\   |   /\n");
  printf(KNRM "             \\   |   \\" KRED "''''" KNRM "/   |   /\n");

}

void printYellowLightOffSegment(void){

  printf(KNRM "             \\   |   /" KYELLOW "''''" KNRM "\\   |   /\n");
  printf(KNRM "             \\   |   \\" KYELLOW "''''" KNRM "/   |   /\n");

}

void printYellowLightOnSegment(void){

  printf(KNRM "             \\   |   /" KBOLDYELLOW "####" KNRM "\\   |   /\n");
  printf(KNRM "             \\   |   \\" KBOLDYELLOW "####" KNRM "/   |   /\n");

}

void printGreenLightOffSegment(void){

  printf(KNRM "             \\   |   /" KGREEN "''''" KNRM "\\   |   /\n");
  printf(KNRM "             \\   |   \\" KGREEN "''''" KNRM "/   |   /\n");

}

void printGreenLightOnSegment(void){

  printf(KNRM "             \\   |   /" KBOLDGREEN "####" KNRM "\\   |   /\n");
  printf(KNRM "             \\   |   \\" KBOLDGREEN "####" KNRM "/   |   /\n");

}

void printTrafficLight(bool redLightOn, bool yellowLightOn, bool greenLightOn){

  printTopSegment();

  if (redLightOn) {
    printRedLightOnSegment();
  } else{
    printRedLightOffSegment();
  }

  printMiddleSegment();

  if (yellowLightOn){
    printYellowLightOnSegment();
  } else{
    printYellowLightOffSegment();
  }

  printMiddleSegment();

  if(greenLightOn){
    printGreenLightOnSegment();
  } else{
    printGreenLightOffSegment();
  }

  printBottomSegment();
}
