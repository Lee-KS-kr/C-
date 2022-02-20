#include <iostream>

using namespace std;

int main() {
	int a = 20;
	float b = 1.2f;

	a = (int)b; //명시적 형변환
	a += 1; //a=a+1;

	int k = 30;
	if (k > 20){ //단일 조건문
		cout<<"k가 20보다 큽니다"<<endl;
	}

	if (k > 20) { //이중 조건문
		cout << "k가 20보다 큽니다." << endl;
	}
	else {
		cout << "k가 20보다 작거나 같습니다." << endl;
	}

	if (k > 30) { //다중 조건문
		cout << "k가 30보다 큽니다" << endl;
	}
	else if (k > 20) {
		cout << "k가 20보다 큽니다." << endl;
	}
	else if (k > 10) {
		cout << "k가 10보다 큽니다." << endl;
	}
	else {
		cout << "k가 10보다 작습니다." << endl;
	}

	int buttonNum;
	cout << "TV 리모컨의 버튼 번호를 입력하세요." << endl;
	cin >> buttonNum;

	switch (buttonNum) {
	case 0:
		cout << "TV 켜" << endl;
		break;
	case 1:
		cout << "TV 꺼" << endl;
		break;
	case 2:
		cout << "볼륨 높여" << endl;
		break;
	case 3:
	case 4:
	case 5:
	case 6:
		cout << "볼륨 낮춰" << endl;
		break;

	default:
		cout << "번호를 잘못 누르셨습니다." << endl;
		break;
	}

	return 0;
}