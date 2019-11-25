/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\alexk                                            */
/*    Created:      Mon Nov 25 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void shoutout(){Brain.Screen.print("Subscribe to pewdiepie");}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  if (1>0){
    for(int i = 0; i < 10; i++) {
    shoutout();
    }
  }else{
  Brain.Screen.clearScreen();
  }
}
