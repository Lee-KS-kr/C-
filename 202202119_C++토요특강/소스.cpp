#include <iostream>

using namespace std;


class A {
private:
    int _value;   // �������
    int _value2;

public:

    static int count;   // �����������
    A(int value, int value2)   // ���ڸ� �޴� ������
        : _value(value), _value2(value2) {}

    // ��������Լ� �ȿ��� 
    // ��� ������ �����ϸ� �ȵ˴ϴ�.
    // ��������Լ������� ������������� ������ �����մϴ�.
    // ��������Լ��� ��ü�� �������� �ʰ� �Լ��� ȣ�� �� �� �ֽ��ϴ�.
    static int GetCount() {   //��������Լ�
       //_value = 20;   // �Ϲ� ��������� ���� �ȵ�.
        return count;
    }

    void info() {   // ����Լ�
        cout << "_value = " << this->_value << endl;
        cout << "_value2 = " << this->_value2 << endl;
        cout << "this pointer = " << this << endl << endl;
    }
};

int A::count = 0;

// this �ڱ� ������ ������
int main() {
    A a(10, 30);
    A b(20, 40);

    A::GetCount();

    a.info();

    b.info();

    return 0;
}