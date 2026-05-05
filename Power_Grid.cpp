//
// Created by matvl on 05.05.2026.
//

#include "PowerGrid.h"
#include <iostream>

void PowerGrid::checkLimits(const std::vector<std::shared_ptr<IoTDevice>>& devices) {
    int total = 0;
    for (auto& dev : devices) {
        total += dev->getEnergy();
    }

    std::cout << "Общее потребление: " << total << " Ватт" << std::endl;

    while (total > limit) {
        for (auto& dev : devices) {
            if (dev->isOn()) {
                dev->turnOff();
                total -= dev->getEnergy();
                std::cout << "Устройство отключено, потребление: " << total << " Ватт" << std::endl;
                break;
            }
        }
    }
}