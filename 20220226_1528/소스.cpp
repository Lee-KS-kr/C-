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
    Arm* _leftArm;   // ������ �� ��� ����
    Arm* _rightArm;

public:
    Robot(Arm* leftArm, Arm* rightArm)
        : _leftArm(leftArm), _rightArm(rightArm) {}

    void SetLeftArm(Arm* parm) {
        _leftArm = parm;
    }

    void SetRightArm(Arm* parm) {
        _rightArm = parm;
    }

    void info() {
        cout << "������: ";
        _leftArm->info();
        cout << "��������: ";
        _rightArm->info();
    }
};

int main() {
    CannonArm cannonArm;
    GunArm gunArm;
    LazerArm lazerArm;
    RocketArm rocketArm;

    Robot cannonArmRobot(&cannonArm, &cannonArm);
    cannonArmRobot.info();
    cout << endl;
    Robot gunArmRobot(&gunArm, &gunArm);
    gunArmRobot.info();

    cout << endl;
    Robot lazerArmRobot(&lazerArm, &lazerArm);
    lazerArmRobot.info();

    cout << endl;
    Robot rocketArmRobot(&rocketArm, &rocketArm);
    rocketArmRobot.info();

    cout << endl;
    rocketArmRobot.SetLeftArm(&gunArm);
    rocketArmRobot.info();

    return 0;
}