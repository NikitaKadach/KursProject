//
// Created by matvl on 05.05.2026.
//

#include "Power_Grid.h"
#include <iostream>

void PowerGrid::checkLimits(const std::vector<std::shared_ptr<IoTDevice>>& devices) {
    int total = 0;
    for (auto& dev : devices) {
        if (dev->isOn()) total += dev->getEnergy();
    }

    std::cout << "  [Сеть] Суммарное потребление: " << total << " Вт" << std::endl;

    if (total > limit) {
        std::cout << "  [Сеть] ПЕРЕГРУЗКА! Отключаем устройства..." << std::endl;
        for (auto& dev : devices) {
            if (dev->isOn() && total > limit) {
                dev->turnOff();
                total -= dev->getEnergy();
                std::cout << "  [Сеть] Устройство отключено, осталось: " << total << " Вт" << std::endl;
            }
        }
    }
}
