#include <iostream>
#include <string>

using namespace std;

class Son { //son�̶�� ������ Ÿ���� ����(Ŭ������ ������ Ÿ��)
int _birthday; //�������
string _address; //�ּ�
string _jumin; //�ֹε�Ϲ�ȣ

public:
	void SetBirthday(int value) //Ŭ���� ���ο��� ������� �Լ� : ����Լ�
	{
		_birthday = value; //�Ϲݺ����� ��������� �򰥸� �� ������ �տ� _�� m_�� �Ἥ �����ϴ°� ���ϴ�
	}

	int GetBitrhday() {
		return _birthday;
	}

	void SetAddreess(string value)
	{
		_address = value;
	}

	string GetAddress() {
		return _address;
	}

	void SetJumin(string value) {
		_jumin = value;
	}

	string GetJumin() {
		return _jumin;
	}
};

//����Ÿ�� �Լ���(�Ű�����Ÿ�� �Ű�������) {������ ��ɾ�}
int add(int num1, int num2) { //Ŭ���� �ܺο��� ������� �Լ� : �Ϲ��Լ�
	int sum = num1 + num2;
	return sum; //�Լ��� �ܺη� ���� ������ �� return���� ���
	//�ܺη� ������ ���� ���� ��� void�� ���
}

void print(string message) {
	cout << message << endl;
	return;
}

int main() {

	int sum = add(10, 20); //�Լ��� ȣ��� �� ���޵Ǵ� �� : ��������(arguement)
	cout << "Sum : " << sum << endl;

	Son a; //Ŭ������ ������ Ÿ�� ����
	//a.birthday = 19950110;
	//a.address = "����";
	//a.jumin = "950110-1231231";
	a.SetBirthday(19950110);
	a.SetAddreess("����");
	a.SetJumin("950110-1231231");

	//cout << "�������" << a.birthday << endl;
	//cout << "�ּ� : " << a.address << endl;
	//cout << "�ֹε�Ϲ�ȣ : " << a.jumin << endl;
	cout << "������� : " << a.GetBitrhday() << endl;
	cout << "�ּ� : " << a.GetAddress() << endl;
	cout << "�ֹε�Ϲ�ȣ : " << a.GetJumin() << endl;

	return 0;
}