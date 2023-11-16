#ifndef DEFINITIONS
#define DEFINITIONS

#include "main.h"

/*Controller Inputs*/
#define L1 pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_L1
#define L2 pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_L2
#define R1 pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_R1
#define R2 pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_R2
#define A pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_A
#define B pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_B
#define X pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_X
#define Y pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_Y
#define Up pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_UP
#define Down pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_DOWN
#define Right pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_RIGHT
#define Left pros::controller_digital_e_t::E_CONTROLLER_DIGITAL_LEFT
#define LeftX pros::controller_analog_e_t::E_CONTROLLER_ANALOG_LEFT_X
#define LeftY pros::controller_analog_e_t::E_CONTROLLER_ANALOG_LEFT_Y
#define RightX pros::controller_analog_e_t::E_CONTROLLER_ANALOG_RIGHT_X
#define RightY pros::controller_analog_e_t::E_CONTROLLER_ANALOG_RIGHT_Y


/*Gearbox Definitions*/
#define REDBOX pros::motor_gearset_e_t::E_MOTOR_GEARSET_36
#define GREENBOX pros::motor_gearset_e_t::E_MOTOR_GEARSET_18
#define BLUEBOX pros::motor_gearset_e_t::E_MOTOR_GEARSET_06

/*Unit Definitions*/
#define DEGREES pros::rotation_units_e_t::E_DEGREES
#define ROTATIONS pros::rotation_units_e_t::E_ROTATIONS

/*Brake Mode Definitions*/
#define COAST pros::motor_brake_mode_e_t::E_MOTOR_BRAKE_COAST
#define HOLD pros::motor_brake_mode_e_t::E_MOTOR_BRAKE_HOLD

/*Port Definitions*/


#endif /* DEFINITIONS */
