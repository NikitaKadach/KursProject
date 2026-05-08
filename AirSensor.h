//
// Created by matvl on 04.05.2026.
//

#ifndef KURSPROJECT_AIRSENSOR_H
#define KURSPROJECT_AIRSENSOR_H

#include "IoTDevice.h"

class AirSensor : public IoTDevice {
public:
    explicit AirSensor(std::string name) : IoTDevice(std::move(name), 15) {}
    void update() override;
};

#endif //KURSPROJECT_AIRSENSOR_H