#include <iostream>
#include <string>

using namespace std;

//축구게임에 필요한 데이터는?
//이름, 포지션, 키, 몸무게 
class Profile {
public: //접근제어자
	string name; //멤버 변수
	string country;
	string position;
	float height;
	float weight;
	int stemina;
};

int main()
{
	Profile son;
	son.name = "손흥민";
	son.country = "한국";
	son.position = "striker";
	son.height = 183.5f;
	son.weight = 77.9f;
	son.stemina = 110;

	cout << "이름 : " << son.name << endl;
	cout << "국적 : " << son.country << endl;
	cout << "포지션 : " << son.position << endl;
	cout << "키 : " << son.height << endl;
	cout << "몸무게 : " << son.weight << endl;
	cout << "스테미나 : " << son.stemina << endl;

	return 0;
}