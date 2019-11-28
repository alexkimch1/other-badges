/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\alexk                                            */
/*    Created:      Thu Nov 28 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int number = 5;
void saysomething(){
  Brain.Screen.print("AHHHHHHHHHHH");
}
void reset(){
  Brain.Screen.clearLine();
}
void CheckNum(){
  if(number<4){
    Brain.Screen.print("Small");
  }else if(number>8){
    Brain.Screen.print("Big");
  }else{
    saysomething();
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  do {
   CheckNum();
   wait(0.5, seconds);
   reset();
} 
while( 1 );
}
