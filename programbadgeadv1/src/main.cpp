/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\alexk                                            */
/*    Created:      Fri Nov 29 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
//function that takes two variables and returns the sum
int Add(int a, int b){
return a+b;
}
//function that prints battery capacity
void checkbatt(){
  Brain.Screen.print (Brain.Battery.capacity());
}
//function that makes a new line on brain screen
void linebreak(){
  Brain.Screen.newLine();
}
//function that prints text
void shoutout(){
  Brain.Screen.print ("Subscribe to pewdiepie");
}
//function that waits for half a second
void wait(){
  wait(0.5, sec);
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  //do this forever
  while(1){
  //print capacity, then battery, then text, before repeating
  Brain.Screen.print(Add(2,2));
  return 0;
  linebreak();
  checkbatt();
  linebreak();
  shoutout();
  linebreak();
  wait();
  }
}
