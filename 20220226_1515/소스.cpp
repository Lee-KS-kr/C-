#include <iostream>
using namespace std;

class Arm {
public:
    virtual void info() {

    }
};

class CannonArm : public Arm {
public:
    void info() override {
        cout << "CannonArm" << endl;
    }
};

class GunArm : public Arm {
public:
    void info() override {
        cout << "GunArm" << endl;
    }
};

class LazerArm : public Arm {
public:
    void info() override {
        cout << "LazerArm" << endl;
    }
};

class RocketArm : public Arm {
public:
    void info() override {
        cout << "RocketArm" << endl;
    }

};


class Robot {
private:
    Arm& _leftArm;
    Arm& _rightArm;

public:
    Robot(Arm& leftArm, Arm& rightArm)
        : _leftArm(leftArm), _rightArm(rightArm) {}

    void info() {
        cout << "¿ÞÂÊÆÈ: ";
        _leftArm.info();
        cout << "¿À¸¥ÂÊÆÈ: ";
        _rightArm.info();
    }
};




int main() {
    CannonArm cannonArm;
    GunArm gunArm;
    LazerArm lazerArm;
    RocketArm rocketArm;

    Robot cannonArmRobot(cannonArm, cannonArm);
    cannonArmRobot.info();

    Robot gunArmRobot(gunArm, gunArm);
    gunArmRobot.info();

    Robot lazerArmRobot(lazerArm, lazerArm);
    lazerArmRobot.info();

    Robot rocketArmRobot(rocketArm, rocketArm);
    rocketArmRobot.info();


    return 0;
}