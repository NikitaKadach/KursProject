//
// Created by Artemiy on 7.05.26.
//
#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include <chrono>
using namespace std;

#include "AirSensor.h"
#include "HUB2.h"
#include "IoTDevice.h"
#include "Power_Grid.h"
#include "TrafficLight.h"


int main() {
    Hub2 hub;
    PowerGrid grid;

    vector<shared_ptr<IoTDevice>> allDevices;

    // 20 датчиков воздуха
    for (int i = 1; i <= 20; i++) {
        auto sensor = make_shared<AirSensor>("Датчик-" + to_string(i));
        hub.addDevice(sensor);
        allDevices.push_back(sensor);
    }

    // 10 светофоров
    for (int i = 1; i <= 10; i++) {
        auto light = make_shared<TrafficLight>("Светофор-" + to_string(i));
        hub.addDevice(light);
        allDevices.push_back(light);
    }

    cout << " Запуск симуляции умного города " << endl;
    cout << "Устройств в сети: " << allDevices.size() << endl;
    cout << "=======================================" << endl << endl;

    for (int i = 1; i <= 20; i++) {
        cout << "--- Шаг " << i << " ---" << endl;

        // 1. Обновляем все устройства через хаб
        hub.tick();

        // 2. Проверяем электросеть
        grid.checkLimits(allDevices);

        cout << endl;

        this_thread::sleep_for(chrono::milliseconds(500));
    }

    cout << "=== Симуляция завершена ===" << endl;
    return 0;
}
