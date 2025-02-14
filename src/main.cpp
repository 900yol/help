/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Clawbot (4-motor Drivetrain) - Template                   */
/*                                                                            */
/*    Name:                                                                   */
/*    Date                                                                    */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 10, 11, 20, D
// ClawMotor            motor         3               
// ArmMotor             motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <iostream>
#include <vex.h>

using namespace vex;
using namespace std;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
}

void usercontrol(void) 
{
  while (1)
  {
    if(Controller.ButtonX.pressing())
    {
      std::cout << "Button X Pressed" << std::endl;
    }
    std::cout << Controller.Axis1.position() << std::endl;
    
    wait(20,msec);
  }
}
