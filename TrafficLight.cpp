//
// Created by Artemiy on 2.05.26.
//
#include <iostream>
#include "Trafficlight.h"
using namespace std;
void TrafficLight::update(){
    isRed = !isRed;
    cout << "Светофор" << name << ": "
         <<(isRed ? "Красный": "Зеленый ")<<endl;
    consumeEnergy();
}
void TrafficLight::turnOff() {

}
bool TrafficLight::isOn() const {
    return true;
}
