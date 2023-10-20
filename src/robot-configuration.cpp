#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

controller Con1;

// VEXcode device constructors
motor FL = motor(PORT1, ratio18_1, false);
motor FR = motor(PORT2, ratio18_1, false);

motor BL = motor(PORT4, ratio18_1, true); 
motor BR = motor(PORT8, ratio18_1, true); 

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}