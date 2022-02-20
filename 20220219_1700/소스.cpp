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
    Animal(string name, float age, float weight, float height)
        : _name(name), _age(age), _weight(weight), _height(height) {}


    void Walk() {
        cout << _name << "�� �ȴ´�." << endl;
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
        :Animal(name, age, weight, height), _isFly(isFly) {}

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

    Pig pig("����", 1.5f, 100.0f, 1.5f);
    Cow cow("��", 1.8f, 200.0f, 2.0f);
    Chicken notflychicken("��", 0.5f, 3.0f, 0.3f, false);
    Chicken flychicken("��", 0.5f, 3.0f, 0.3f, true);

    pig.Speak();
    pig.Walk();

    cout << endl;
    cow.Speak();
    cow.Walk();

    cout << endl;
    notflychicken.Speak();
    notflychicken.Walk();

    cout << endl;
    flychicken.Speak();
    flychicken.Walk();
    cout << endl;



    return 0;
}