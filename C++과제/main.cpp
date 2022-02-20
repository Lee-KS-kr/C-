#include <iostream>
#include <string>

using namespace std;

class Electronics
{
public:
	string name;
	string model;
	string brand;
	float inch;
	float weightGram;
	int price;
	string os;
};

int main()
{
	Electronics laptop;
	laptop.name = "laptop";
	laptop.model = "ASUS TUF Gaming FX504";
	laptop.inch = 15.6;
	laptop.weightGram = 2100;
	laptop.price = 1248950;
	laptop.os = "Windows";
	laptop.brand = "ASUS";

	Electronics phone;
	phone.name = "smartphone";
	phone.model = "Samsung Galaxy Z Flip3";
	phone.inch = 6.7;
	phone.weightGram = 183;
	phone.price = 250000;
	phone.os = "Android";
	phone.brand = "Samsung";

	Electronics ipad;
	ipad.name = "iPad";
	ipad.model = "iPad 6th generation";
	ipad.inch = 9.7;
	ipad.weightGram = 469;
	ipad.price = 260000;;
	ipad.os = "iOS";
	ipad.brand = "Apple";

	cout << "첫 번째 기기" << endl;
	cout << "종류 : " << laptop.name << endl;
	cout << "모델명 : " << laptop.model << endl;
	cout << "메이커 : " << laptop.brand << endl;
	cout << "크기 : " << laptop.inch << "인치" << endl;
	cout << "무게 : " << laptop.weightGram << "g" << endl;
	cout << "구매가격 : " << laptop.price << "원" << endl;
	cout << "운영체제 : " << laptop.os << "\n" << endl;

	cout << "두 번째 기기" << endl;
	cout << "종류 : " << phone.name << endl;
	cout << "모델명 : " << phone.model << endl;
	cout << "메이커 : " << phone.brand << endl;
	cout << "크기 : " << phone.inch << "인치" << endl;
	cout << "무게 : " << phone.weightGram << "g" << endl;
	cout << "구매가격 : " << phone.price << "원" << endl;
	cout << "운영체제 : " << phone.os << "\n" << endl;

	cout << "세 번째 기기" << endl;
	cout << "종류 : " << ipad.name << endl;
	cout << "모델명 : " << ipad.model << endl;
	cout << "메이커 : " << ipad.brand << endl;
	cout << "크기 : " << ipad.inch << "인치" << endl;
	cout << "무게 : " << ipad.weightGram << "g" << endl;
	cout << "구매가격 : " << ipad.price << "원" << endl;
	cout << "운영체제 : " << ipad.os << "\n" << endl;

	return 0;
}