#include <iostream>

using namespace std;

int main() {

    // �ʱ��;���ǽ�;������
    // for���� �ݺ� Ƚ���� �ƴ� ��쿡 ����ϱ� ���� ������ �Ǿ��ֽ��ϴ�.
    for (int i = 0; i < 10; i++) {
        cout << "i = " << i << endl;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "i = " << i << ", " << "j = " << j << endl;
        }
    }


    float a = 3000.123f;

    // while ���� �ݺ�Ƚ���� �𸣴� ��쿡 ����ϱ� ���� ������ 
    // �Ǿ��ֽ��ϴ�.
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