#include <iostream>
#include <string>

using namespace std;

//�౸���ӿ� �ʿ��� �����ʹ�?
//�̸�, ������, Ű, ������ 
class Profile {
public: //����������
	string name; //��� ����
	string country;
	string position;
	float height;
	float weight;
	int stemina;
};

int main()
{
	Profile son;
	son.name = "�����";
	son.country = "�ѱ�";
	son.position = "striker";
	son.height = 183.5f;
	son.weight = 77.9f;
	son.stemina = 110;

	cout << "�̸� : " << son.name << endl;
	cout << "���� : " << son.country << endl;
	cout << "������ : " << son.position << endl;
	cout << "Ű : " << son.height << endl;
	cout << "������ : " << son.weight << endl;
	cout << "���׹̳� : " << son.stemina << endl;

	return 0;
}