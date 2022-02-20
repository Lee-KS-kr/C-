#include <iostream>
#include <string>

using namespace std;
// ����� �����
// �Ϲ�ȭ, Ư��ȭ

class Animal {
protected:
    string _name;
    float _age;
    float _weight;
    float _height;

public:
    Animal(string name, float age, float weight, float height) :
        _name(name), _age(age), _weight(weight), _height(height) {}
    
    void Walk() {
        cout << _name << "�� �ȴ´�." << endl;
    }

    void info() {
        cout << "�̸� : " << _name << endl;
        cout << "���� : " << _age << endl;
        cout << "Ű : " << _height << endl;
        cout << "������ : " << _weight << endl;
    }
};

class Pig : public Animal {
public:
    Pig(string name, float age, float weight, float height)
        : Animal(name, age, weight, height) {}

    void Speak() {
        cout << _name << "�� ���Ѵ�. �ܲ�" << endl;
    }
};

class Cow : public Animal {
public:
    Cow(string name, float age, float weight, float height)
        : Animal(name, age, weight, height) {}

    void Speak() {
        cout << _name << "�� ���Ѵ�. ����" << endl;
    }
};

class Chicken : public Animal {
private:
    bool _isFly;

public:
    Chicken(string name, float age, float weight, float height, bool isFly)
        : Animal(name, age, weight, height), _isFly(isFly) {}

    void Speak() {
        cout << _name << "�� ���Ѵ�. ������" << endl;
    }

    void Walk() {
        if (_isFly) {
            cout << _name << "�� ����." << endl;
        }
        else {
            cout << _name << "�� �ȴ´�." << endl;
        }
    }
};


int main() {

    //Pig pig("����", 1.5f, 100.0f, 1.5f);
    Cow cow("��", 1.8f, 200.0f, 2.0f);
    Chicken notflychicken("��", 0.5f, 3.0f, 0.3f, false);
    Chicken flychicken("��", 0.5f, 3.0f, 0.3f, true);
    Animal tiger("ȣ����", 2, 180, 1.7f);

    Pig pig[] = { {"����1", 1, 50, 1.1f}, {"����2", 2, 280, 2.1f} };
    for (int index = 0; index < 2; index++) {
		pig[index].info();
		pig[index].Speak();
		pig[index].Walk();
		cout << endl;
    }


    cow.info();
    cow.Speak();
    cow.Walk();
    cout << endl;

    notflychicken.info();
    notflychicken.Speak();
    notflychicken.Walk();
    cout << endl;

    flychicken.info();
    flychicken.Speak();
    flychicken.Walk();
    cout << endl;

    tiger.info();

    return 0;
}