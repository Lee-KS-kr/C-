#include <iostream>

using namespace std;

class A {
private:
    const int MAX;   // const ������
    int& _refvalue; // �������� ��������� ������ �ִ� ���
                // �ݵ�� �����ڸ� ������ �մϴ�.
    int _value2;

public:
    A() : _refvalue(_value2), MAX(100) {}

    A(int& refvalue, int max)
        : _refvalue(refvalue), MAX(max) {}
};

int global = 10;   // ��������, �ܺκ���

int add(int a, int b) {
    int sum = a + b;   // ���ú���
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

    const int MAX = 100;   // const �� ����
                      // const �������� ������ ����� ���ÿ�
                      // �ʱ�ȭ�� �ؾ� �մϴ�.
    //MAX = 200; //�Ұ�

    int a = 20;   // ���ú���, �ڵ�����
    int b = 30;
    int refsum = refadd(a, b);
    cout << a << " + " << b << " = " << refsum << endl;

    A aa(a, 200);
    int sum = add(a, b);
    global = 100;
    cout << a << " + " << b << " = " << sum << endl;
    int d = a;

    // ������
    int& refa = a;

    return 0;
}