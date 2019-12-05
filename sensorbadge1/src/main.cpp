/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\alexk                                            */
/*    Created:      Wed Dec 04 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// RangeFinderA         sonar         A, B            
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
//find distance from rangefinder
int range = RangeFinderA.distance(mm);
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  // do forever
  while(1){
  // print distance value
   Brain.Screen.print(range);
  }
  
}
