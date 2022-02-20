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
		cout << "종류 : " << _name << endl;
		cout << "모델명 : " << _model << endl;
		cout << "메이커 : " << _brand << endl;
		cout << "크기 : " << _inch << "인치" << endl;
		cout << "무게 : " << _weightGram << "g" << endl;
		cout << "구매가격 : " << _price << "원" << endl;
		cout << "운영체제 : " << _os << "\n\n" << endl;
	}
};

int main()
{
	Electronics laptop("laptop", "ASUS TUF Gaming FX504", "ASUS", 15.6, 2100, 1248950, "Windows");
	Electronics phone("smartphone", "Samsung Galaxy Z Flip3", "Samsung", 6.7, 183, 250000, "Android");
	Electronics ipad("iPad", "iPad 6th generation", "Apple", 9.7, 469, 260000, "Apple");
	
	cout << "*------첫 번째 기기------*" << endl;
	laptop.info();
	cout << "*------두 번째 기기------*" << endl;
	phone.info();
	cout << "*------세 번째 기기------*" << endl;
	ipad.info();

	return 0;
}