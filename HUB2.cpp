//
// Created by matvl on 03.05.2026.
//

#include "HUB2.h"
#include <iostream>

void Hub2::addDevice(std::shared_ptr<IoTDevice> device) {
    devices.push_back(device);
}

void Hub2::tick() {
    for (auto& device : devices) {
        device->update();
    }
    std::cout << "Шаг завершен" << std::endl;
}