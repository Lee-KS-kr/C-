#include <iostream>

using namespace std;

class A {
public:

    void print() {
        cout << "A:print()" << endl;
    }

    virtual void print2() {
        cout << "A:print2()" << endl;
    }

    virtual void print3() {
        cout << "A:print3()" << endl;
    }
};

class B : public A {
public:

    void print() {
        cout << "B:print()" << endl;
    }

    void print2() override {
        cout << "B:print2()" << endl;
    }

};

class C : public A {
public:

    void print() {
        cout << "C:print()" << endl;
    }

    void print3() override {
        cout << "C:print3()" << endl;
    }

};


void funcPrint(A& ref) {
    ref.print();
    ref.print2();
    ref.print3();
}


int main() {
    A a;
    B b;
    C c;

    cout << "A class type" << endl;
    funcPrint(a);

    cout << "B class type" << endl;
    funcPrint(b);

    cout << "C class type" << endl;
    funcPrint(c);

    return 0;
}