#include <iostream>

using namespace std;

int main() 
{
	//반복문이란?
	/*
	1. 반복문에 사용할 카운터 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행
	4. 카운터의 값을 변화
	*/

	/*for (int i = 5; i > 0; i--) {
		cout << i << "번째입니다.\n";
	}

	string str = "Panda";
	bool a = true; bool b = false;
	int i = 0;
	while (str[i] !='\0') {
		cout << str[i] << endl;
		i++;
	}

	while (b) {
		cout << "hello\n";
	}

	do {
		cout << "do-while문 입니다.\n";
	} while (b);*/

	//증가 연산자, 감소 연산자
	/*int a = 10;
	int b = 10;
	
	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << endl;
	cout << "++b는 " << ++b << endl;*/

	//배열 기반 반복문
	//배열의 값보다 적은 수가 초기화되어 있는 경우
	//0으로 초기화된 값도 모두 출력됨
	int a[5] = { 1,3,5,7,9};
	for (int i : a) {
		cout << i << endl;
	}
	cout << "\n";

	//중첩 루프 : 2차원 배열
	int temp[4][5] = {
		{1,2,3,4,5},{11,22,33,44,55},
		{111,222,333,444,555},{1111,2222,3333,4444,5555}
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	return 0;
}