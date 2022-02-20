#include <iostream>

using namespace std;

class A {
private:
    const int MAX;   // const 형변수
    int& _refvalue; // 참조형의 멤버변수를 가지고 있는 경우
                // 반드시 생성자를 만들어야 합니다.
    int _value2;

public:
    A() : _refvalue(_value2), MAX(100) {}

    A(int& refvalue, int max)
        : _refvalue(refvalue), MAX(max) {}
};

int global = 10;   // 전역변수, 외부변수

int add(int a, int b) {
    int sum = a + b;   // 로컬변수
    global = 20;
    return sum;
}

int refadd(int& refa, int& refb) {
    return refa + refb;
}

int pointadd(int* pa, int* pb)
{
    int a = 20;
    pa = &a;
    return *pa + *pb;
}

int main() {

    const int MAX = 100;   // const 형 변수
                      // const 형변수는 변수를 만듦과 동시에
                      // 초기화를 해야 합니다.
    //MAX = 200; //불가

    int a = 20;   // 로컬변수, 자동변수
    int b = 30;
    int refsum = refadd(a, b);
    cout << a << " + " << b << " = " << refsum << endl;

    A aa(a, 200);
    int sum = add(a, b);
    global = 100;
    cout << a << " + " << b << " = " << sum << endl;
    int d = a;

    // 참조형
    int& refa = a;

    return 0;
}