//
// Created by Artemiy on 2.05.26.
//

#ifndef KURSPROJECT_TRAFFICLIGHT_H
#define KURSPROJECT_TRAFFICLIGHT_H
#include "iotdevice.h"
#include <string>

class TrafficLight: public IoTDevice{
private:
    bool isRed;
public:
    TrafficLight(std:: string name);
    void update() override;
    void turnOff() override;
    bool isOn() const  override;



};



#endif