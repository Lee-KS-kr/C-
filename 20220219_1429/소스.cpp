#include <iostream>

using namespace std;

//c������ �� ������Ʈ �ȿ� ������ �Լ����� ���� �� ����.
//c++������ �� ������Ʈ �ȿ� ������ �Լ����� ���� �� �ִ�.
//�����ε� : ������ �Լ������� �Լ��� ����� ��.
//������ ������ �Լ��� ���� �� ����.
//�Ű������� ������ �Ű������� ������ Ÿ���� �޶�� �Ѵ�.
//����Ÿ���� ���Ե��� �ʴ´�.

//�Լ��� ���̹��ϴ� ����� c�� �޶� ������ ��
//c++������ �Լ��� ���̹��Ҷ� ���� �ͱ۸��� ���
//�Ű������� ������ Ÿ���� �Լ��� �̤Ѥ��� ���Խ�Ű�� ���

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