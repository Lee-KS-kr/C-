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

	cout << "ù ��° ���" << endl;
	cout << "���� : " << laptop.name << endl;
	cout << "�𵨸� : " << laptop.model << endl;
	cout << "����Ŀ : " << laptop.brand << endl;
	cout << "ũ�� : " << laptop.inch << "��ġ" << endl;
	cout << "���� : " << laptop.weightGram << "g" << endl;
	cout << "���Ű��� : " << laptop.price << "��" << endl;
	cout << "�ü�� : " << laptop.os << "\n" << endl;

	cout << "�� ��° ���" << endl;
	cout << "���� : " << phone.name << endl;
	cout << "�𵨸� : " << phone.model << endl;
	cout << "����Ŀ : " << phone.brand << endl;
	cout << "ũ�� : " << phone.inch << "��ġ" << endl;
	cout << "���� : " << phone.weightGram << "g" << endl;
	cout << "���Ű��� : " << phone.price << "��" << endl;
	cout << "�ü�� : " << phone.os << "\n" << endl;

	cout << "�� ��° ���" << endl;
	cout << "���� : " << ipad.name << endl;
	cout << "�𵨸� : " << ipad.model << endl;
	cout << "����Ŀ : " << ipad.brand << endl;
	cout << "ũ�� : " << ipad.inch << "��ġ" << endl;
	cout << "���� : " << ipad.weightGram << "g" << endl;
	cout << "���Ű��� : " << ipad.price << "��" << endl;
	cout << "�ü�� : " << ipad.os << "\n" << endl;

	return 0;
}