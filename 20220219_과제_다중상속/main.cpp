#include <iostream>
#include <string>

using namespace std;

class Computer {
public :
	void browse() {

	}

	void calculate() {

	}

	void mailing() {

	}

	void communicate() {

	}

	void fileSave() {

	}
};

class Telephone {
public:
	void inBoundCall() {

	}
	
	void outBoundCall() {

	}

	void contact() {

	}

};

class SmartPhone : public Computer, public Telephone {
public:
	void camera() {

	}

	void flashLight() {

	}

	void SamsungPay() {

	}
};

int main() {

	return 0;
}