#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

controller Con1;

// VEXcode device constructors
motor FL = motor(PORT6, ratio18_1, false);
motor FR = motor(PORT7, ratio18_1, true);

motor BL = motor(PORT5, ratio18_1, true); 
motor BR = motor(PORT4, ratio18_1, false); 

motor Pult = motor(PORT9, ratio18_1, true);
limit LaunchSwitch = limit(Brain.ThreeWirePort.A);

motor Lift = motor(PORT1, ratio6_1, false);
limit LiftSwitch = limit(Brain.ThreeWirePort.B);
motor IntakeMotor = motor(PORT10, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}