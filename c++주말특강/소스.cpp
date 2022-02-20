#include <iostream>
#include <string>

using namespace std;

class Son { //son이라는 데이터 타입을 만듬(클래스형 데이터 타입)
int _birthday; //생년월일
string _address; //주소
string _jumin; //주민등록번호

public:
	void SetBirthday(int value) //클래스 내부에서 만들어진 함수 : 멤버함수
	{
		_birthday = value; //일반변수와 멤버변수가 헷갈릴 수 있으니 앞에 _나 m_를 써서 구분하는게 편하다
	}

	int GetBitrhday() {
		return _birthday;
	}

	void SetAddreess(string value)
	{
		_address = value;
	}

	string GetAddress() {
		return _address;
	}

	void SetJumin(string value) {
		_jumin = value;
	}

	string GetJumin() {
		return _jumin;
	}
};

//리턴타입 함수명(매개변수타입 매개변수명) {실행할 명령어}
int add(int num1, int num2) { //클래스 외부에서 만들어진 함수 : 일반함수
	int sum = num1 + num2;
	return sum; //함수의 외부로 값을 전달할 때 return문을 사용
	//외부로 전달할 값이 없을 경우 void를 사용
}

void print(string message) {
	cout << message << endl;
	return;
}

int main() {

	int sum = add(10, 20); //함수로 호출될 때 전달되는 값 : 전달인자(arguement)
	cout << "Sum : " << sum << endl;

	Son a; //클래스형 데이터 타입 변수
	//a.birthday = 19950110;
	//a.address = "런던";
	//a.jumin = "950110-1231231";
	a.SetBirthday(19950110);
	a.SetAddreess("런던");
	a.SetJumin("950110-1231231");

	//cout << "생년월일" << a.birthday << endl;
	//cout << "주소 : " << a.address << endl;
	//cout << "주민등록번호 : " << a.jumin << endl;
	cout << "생년월일 : " << a.GetBitrhday() << endl;
	cout << "주소 : " << a.GetAddress() << endl;
	cout << "주민등록번호 : " << a.GetJumin() << endl;

	return 0;
}