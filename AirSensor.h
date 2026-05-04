//
// Created by matvl on 04.05.2026.
//

#ifndef KURSPROJECT_AIRSENSOR_H
#define KURSPROJECT_AIRSENSOR_H

#include "IoTDevice.h"

class AirSensor : public IoTDevice {
public:
    AirSensor() : IoTDevice(15) {}
    void update() override;
};

#endif //KURSPROJECT_AIRSENSOR_H