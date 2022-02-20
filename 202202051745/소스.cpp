#include <iostream>

using namespace std;

int main() {

    // 초기식;조건식;증감식
    // for문은 반복 횟수를 아는 경우에 사용하기 좋은 구조로 되어있습니다.
    for (int i = 0; i < 10; i++) {
        cout << "i = " << i << endl;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "i = " << i << ", " << "j = " << j << endl;
        }
    }


    float a = 3000.123f;

    // while 문은 반복횟수를 모르는 경우에 사용하기 좋은 구조로 
    // 되어있습니다.
    a = -1.0f;
    while (a > 0.0f) {
        cout << "a = " << a << endl;
        a -= 1.23f;
    }

    a = 3000.123f;
    do {
        cout << "a = " << a << endl;
        a -= 1.23f;

    } while (a > 0.0f);



    return 0;
}