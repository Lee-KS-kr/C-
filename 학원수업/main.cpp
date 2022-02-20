#include <iostream>

using namespace std;

//프로그램 시작점
int main() {
	int a;
	int b;
	//4byte 정수 저장공간을 메모리에 할당해줘
	//나는 그 할당된 공간에 a b라는 이름으로 접근할거야

	a = 20;
	b = 30;

	int sum = a + b;

	cout << a << " + " << b << " = " << sum << endl;
	//콘솔 화면에 문자열을 출력할 떄 cout객체를 사용

	return 0;

	//return문은 함수가 명령어를 처리한 결과값을
	//함수 외부로 전달할 때 사용
}