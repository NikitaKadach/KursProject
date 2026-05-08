//
// Created by Artemiy on 2.05.26.
//
#include <iostream>
#include "TrafficLight.h"
using namespace std;

void TrafficLight::update() {
    isRed = !isRed;
    cout << "[" << name << "] "
         << (isRed ? "Красный" : "Зеленый") << endl;
    consumeEnergy();
}

void TrafficLight::turnOff() {
    is_on = false;
}

bool TrafficLight::isOn() const {
    return is_on;
}
