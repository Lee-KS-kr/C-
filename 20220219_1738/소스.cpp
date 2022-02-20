#include<iostream>

using namespace std;

class A {
public:
	int _value;
public:
	A(int value) :_value(value) {}
};

class B : public A {
public :
	int _value2;

	B(int value, int value2) :
		A(value), _value2(value2) {}
};

int main() {
	A a(10);
	B b(10, 20);
	cout << b._value << " , " << b._value2 << endl;

	A& ref = b;
	ref._value = 100;
	cout << "b._value : " << b._value << endl;

	B& refb = (B&)ref;

	A* pa = &b;
	pa->_value = 200;
	cout << "b._value : " << b._value << endl;

	B* pab = (B*)pa;
	cout << "pab->_value : " << pab->_value << endl;
	cout << "pab->_value2 : " << pab->_value2 << endl;


}