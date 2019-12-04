/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\alexk                                            */
/*    Created:      Fri Nov 29 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
int ControlIn = Controller1.Axis3.position();
int value;
using namespace vex;
//Program that prints different values depending on the input number
int main() {
  vexcodeInit();
  //do forever
  while(1){
  //set value according to joystick position
  if (ControlIn>0){
    value = 1;
    }else if(ControlIn<0){
      value = 2;
  }
  //output depends on value
  switch(value){
    //if joystick is forwards
    case 1: Brain.Screen.print("FORWARDS");
    break;
    //if joystick is backwards
    case 2: Brain.Screen.print("BACKWARDS");
    break;
    //if joystick is neutral
    default: Brain.Screen.print("CHILLING");
    break;
  }
  }
}
