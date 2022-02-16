//
// Created by blancoj on 2/15/2022.
//

#include "intake.h"
#include "main.h"

int taketake_port = 16;

pros::Motor taketake(taketake_port, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
void set_take(int input) {taketake = input;}

void takeintake() {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_X)) {
        set_take(127);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_B)) {
        set_take(-127);
    } else {
        set_take(0);
    }
}