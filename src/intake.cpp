//
// Created by blancoj on 2/15/2022.
//

#include "intake.h"
#include "main.h"

int biggiecheeie_port = 16;

pros::Motor taketake(biggiecheeie_port, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
void set_take(int input) {taketake = input;}

bool takeboy = false;
void takeintake() {

    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_X))
    {
        ///set_mogo(127);
        if (takeboy == true) {
            takeboy = false;
            pros::delay(100);
        } else {
            takeboy = true;
            pros::delay(100);
        }
    }
    if (takeboy == true) {
        set_take(127);
//
    } else {
        set_take(0);
//
    }
}