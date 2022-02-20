#include <iostream>
#include <string>

using namespace std;
// 상속의 방법은
// 일반화, 특수화


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
        cout << _name << "이 걷는다." << endl;
    }

};

class Pig : public Animal {
public:
    Pig(string name, float age, float weight, float height)
        : Animal(name, age, weight, height) {}

    void Speak() {
        cout << _name << "이 말한다. 꿀꿀" << endl;
    }

};

class Cow : public Animal {

public:
    Cow(string name, float age, float weight, float height)
        : Animal(name, age, weight, height) {}

    void Speak() {
        cout << _name << "이 말한다. 음매" << endl;
    }

};

class Chicken : public Animal {
private:
    bool _isFly;

public:
    Chicken(string name, float age, float weight, float height, bool isFly)
        :Animal(name, age, weight, height), _isFly(isFly) {}

    void Speak() {
        cout << _name << "이 말한다. 꼬끼오" << endl;
    }

    void Walk() {
        if (_isFly) {
            cout << _name << "이 난다." << endl;
        }
        else {
            cout << _name << "이 걷는다." << endl;
        }

    }

};


int main() {

    Pig pig("돼지", 1.5f, 100.0f, 1.5f);
    Cow cow("소", 1.8f, 200.0f, 2.0f);
    Chicken notflychicken("닭", 0.5f, 3.0f, 0.3f, false);
    Chicken flychicken("닭", 0.5f, 3.0f, 0.3f, true);

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