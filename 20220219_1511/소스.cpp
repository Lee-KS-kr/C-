#include <iostream>

using namespace std;

int global = 20; //�ܺκ���, ��������

class a {
private :
	int value; //�������

public:
	int info() { //����Լ�
		global = 100;
	}
};

int add(int a, int b) {//�Ϲ��Լ�
	int sum; //���ú���, ��������
	static int count = 0; //���ú���, ��������
	sum = a + b;

	global = 100;

	return sum;
}

//main�Լ� ���α׷� ������
int main() {
	int a; //���ú���, �ڵ�����
	int b; //���ú���, �ڵ�����

	a = 20;
	b = 30;

	int sum;
	sum = add(a, b);

	cout << a << " + " << b << " = " << sum << endl;

	return 0;
}