/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\alexk                                            */
/*    Created:      Tue Oct 22 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// RangeFinderA         sonar         A, B            
// EncoderC             encoder       C, D            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  //reset Encoder
  EncoderC.setPosition(0, degrees);
  //repeat forever
  while(1){
    double Encoder;
    double RangeFinder;
    //collect values from sensors
    Encoder = EncoderC.position(deg);
    RangeFinder = RangeFinderA.distance(inches);
    //print value of encoder position
    Brain.Screen.print("Encoder:", Encoder);
    //print value of rangefinder distance
    Brain.Screen.print("RangeFinder:",RangeFinder );
    //1 second delay before next loop
    wait(1, seconds);
  }

  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
};
