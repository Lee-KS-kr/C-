#include <iostream>

using namespace std;

//c언어에서는 한 프로젝트 안에 동일한 함수명이 있을 수 없다.
//c++에서는 한 프로젝트 안에 동일한 함수명을 만들 수 있다.
//오버로딩 : 동일한 함수명으로 함수를 만드는 것.
//완전히 동일한 함수는 만들 수 없다.
//매개변수의 갯수나 매개변수의 데이터 타입이 달라야 한다.
//리턴타입은 포함되지 않는다.

//함수를 네이밍하는 방법이 c와 달라서 가능한 것
//c++에서는 함수를 네이밍할때 네임 맹글링을 사용
//매개변수의 데이터 타입을 함수의 이ㅡㄻ에 포함시키는 방법

class Math2 {
public:
	int add(int a, int b) {
		return a + b;
	} //addXX

	int add(float a) {
		return a;
	} //addY

	float add(float a, int b) {
		return a - b;
	} //addXY

	float add(float a, float b) {
		return a + b;
	} //addYY
};

int add(int a, int b) {
	return a + b;
} //_add

int main() {
	int a = 20;
	int b = 30;

	float c = 40;
	float d = 50;

	Math2 math;
	cout << a << " + " << b << " = " << math.add(a, b) << endl;
	//cout<<a<<" + "<<b<<" = "<<math.addXX(20,30)<<endl;

	cout << c << " + " << d << " = " << math.add(c, d) << endl;
	//cout<<c<< " + " <<d<< " = " <<math.addYY(c, d)<<endl;
}