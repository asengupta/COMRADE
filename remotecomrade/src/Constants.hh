#ifndef CONSTANTS_H
#define CONSTANTS_H

#define SONAR_MAX_RANGE_READING 255
#define SONAR_STEP_SIZE 0.9
#define SONAR_STEPS_PER_ANGLE 16.0
#define SONAR_ANGLES_PER_SWEEP 12.0
#define SONAR_START_ANGLE 230.0
#define SONAR_BEAM_WIDTH 30.0
#define SONAR_UNIT_LENGTH 25.4 // in mm
#define ROBOT_SIZE_X  450 //in mm
#define ROBOT_SIZE_Y  600 //in mm

#define ROBOT_UNITS_X (ROBOT_SIZE_X/(SONAR_UNIT_LENGTH*2.0))
#define ROBOT_UNITS_Y (ROBOT_SIZE_Y/(SONAR_UNIT_LENGTH*2.0))
#define SONAR_HALF_BEAM_WIDTH (SONAR_BEAM_WIDTH/2.0)
#define SONAR_ANGLE_SIZE (SONAR_STEP_SIZE*SONAR_STEPS_PER_ANGLE)
#define SONAR_SWEEP_SIZE (ANGLE_SIZE*SONAR_ANGLE_PER_SWEEP)

#endif
