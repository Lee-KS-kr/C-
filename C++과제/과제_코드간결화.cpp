#include <iostream>
#include <string>

using namespace std;

class Electronics
{
private:
	string _name;
	string _model;
	string _brand;
	float _inch;
	float _weightGram;
	int _price;
	string _os;

public:
	Electronics(string name, string model, string brand, float inch, float weight, int price, string os)
		: _name(name), _model(model), _brand(brand), _inch(inch), _weightGram(weight), _price(price), _os(os)
	{

	}
	void info()
	{
		cout << "���� : " << _name << endl;
		cout << "�𵨸� : " << _model << endl;
		cout << "����Ŀ : " << _brand << endl;
		cout << "ũ�� : " << _inch << "��ġ" << endl;
		cout << "���� : " << _weightGram << "g" << endl;
		cout << "���Ű��� : " << _price << "��" << endl;
		cout << "�ü�� : " << _os << "\n\n" << endl;
	}
};

int main()
{
	Electronics laptop("laptop", "ASUS TUF Gaming FX504", "ASUS", 15.6, 2100, 1248950, "Windows");
	Electronics phone("smartphone", "Samsung Galaxy Z Flip3", "Samsung", 6.7, 183, 250000, "Android");
	Electronics ipad("iPad", "iPad 6th generation", "Apple", 9.7, 469, 260000, "Apple");
	
	cout << "*------ù ��° ���------*" << endl;
	laptop.info();
	cout << "*------�� ��° ���------*" << endl;
	phone.info();
	cout << "*------�� ��° ���------*" << endl;
	ipad.info();

	return 0;
}