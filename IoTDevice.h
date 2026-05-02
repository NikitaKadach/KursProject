//
// Created by Artemiy on 1.05.26.
//

#ifndef KURSPROJECT_IOTDEVICE_H
#define KURSPROJECT_IOTDEVICE_H
class IoTDevice{
protected:
    bool is_on = true;
    int power_consumption;
    int energy_consumed = 0;
    std::string_name;
public:
    IoTDevice(int power): power_consumption(power){}
    virtual ~IoTDevice(){}
    virtual void update()=0;
    void turnOff(){
        is_on= false;
    }
    virtual bool isOn() const{
        return is_on;
    }
    int getEnergy() const{
        return energy_consumed;
    }
    void consumeEnergy() {
        if (is_on) {
            energy_consumed += power_consumption;
        }
    }
};



#endif