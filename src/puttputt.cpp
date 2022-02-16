//
// Created by blancoj on 2/7/2022.
//

#include "puttputt.h"
#include "main.h"

int puttputtport = 2;

pros::Motor putt(puttputtport, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);


void set_puttputt(int input) {
    pros::c::motor_set_brake_mode(puttputtport, MOTOR_BRAKE_HOLD);
    putt = input;
}