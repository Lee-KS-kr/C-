#include <iostream>
#include <climits>
#include <cstring>
#define SIZE 20
#pragma warning (disable:4996)

using namespace std;
//������ ������ std::cout... sod::endl������ �ڵ带 ¥�� ��

int main()
{
	//cout << "Hello, World!" << endl;
	// cout �ڿ� ������ ������ �ܼ�â�� ��� endl �ٹٲ�\n
	// <<�������� ����. Hello��� ���ڸ� cout�� ���
	//1. ������ ���� �� �ִ� ��
	//cf) ��� : ���� �� ���� ��
	/*
	1. ������ �ڷ���
	2. ������ �̸�
	3. ������ ��� ����Ǵ°�?(�޸𸮿���)
	*/
	/*
	1. ���ڷ� ������ �� ���� int 77aaa;
	2. c++���� ����ϰ� �ִ� Ű����� ����� �� ���� int return;
	3. white space�� ����� �� ���� int aa a;
	*/
	//int a; //����
	//a = 7; //����
	//int b = 5; //�ʱ�ȭ
	//cout << "a = " << a << ", b =" << b << endl;
	//a = 5;
	//b = 10;
	//cout << "a = " << &a << ", b = " << &b << endl;
	//������ : �Ҽ��ΰ� ���� �� ���� ����, 0, ���� ����
	//short, int, long, long long
	/*int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�. " << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << " �̴�." << endl;

	cout << "short�� " << sizeof n_short << "����Ʈ�̴�. " << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_short << " �̴�." << endl;

	cout << "long�� " << sizeof n_long << "����Ʈ�̴�. " << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_long << " �̴�." << endl;

	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�. " << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_llong << " �̴�." << endl;
	*/
	//�Ǽ��� : �Ҽ��ΰ� �ִ� ��
	/*float a = 3.14;
	int b = 3.14;
	cout << a << " " << b << endl;*/
	//char ���� ������
	/*int a = 77;
	char b = a;
	cout << b << endl;*/
	//bool : 0(false) Ȥ�� 1(true)
	/*bool a = 0;
	bool b = 1;
	bool c = 10;
	cout << a << " " << b << " " << c << endl;*/
	//��� : �ٲ� �ʿ䰡 ���� ��, �ٲ��� �ȵǴ� ��
	//���� ���̸� ���ϴ� ���α׷�
	//������ * ������ * ����
	/*const float PI = 3.1415926535;
	int r = 3;
	float s = r * r * PI;

	int r2 = 5;
	float s2 = r2 * r2 * PI;

	cout << s << endl;
	cout << s2 << endl;*/
	//�������� ��Ȱ
	//���������� �������� ��ȯ
	//typeName(a) (typeName)a
	//c++
	//static_cast<typeName>
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/
	/*int a = 3.141592;
	cout << a << endl;
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<float>(ch) << endl;*/
	//auto �ʱ�ȭ�ϴ� �����͸� ���� ���������� ������
	/*auto ch = 100;
	auto x = 1.5;
	auto y = 1.3e12L;
	auto name = "Lee";
	cout << name << endl;*/
	//c++�� ���յ��������� �����Ѵ�
	// >>����� ���Ǵ�� ���ο� ���������� ���� �� �ִ�.
	//���յ������� : �⺻ �������� �ε��Ҽ������� ����
	//�迭 : ���� ���������� ����
	//typeName arrayName[arraySize]
	/*short month[12] = { 1,2,3 };
	cout << month[4] << endl;
	char a[6] = { 'h','e','l','l','o','\0'};
	cout << a << endl;
	char b[] = "Hello";
	cout << b << endl;*/
	//������ ����
	/*const int size=15;
	char name1[size];
	char name2[size] = "Mizue Lee";

	cout << "�ȳ��ϼ���! ���� " << name2 << "�Դϴ�." << endl;
	cout << "������ ��� �ǽó���?\n";
	cin.getline(name1, size);
	cout << "��, " << name1 << "��." << endl;
	cout << "����� �̸��� " << strlen(name1) << "�� �Դϴٸ�\n";
	cout << sizeof(name1) << " ����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "������ " << name1[0] << "�ڷ� �����Ͻô±���." << endl;
	name2[3] = '\0';
	cout << "�� �̸��� ù �� ���ڴ� ������ �����ϴ� : ";
	cout << name2 << endl;*/
	/*
	C++���� ���ڿ��� �ٷ�� ����� string
	c��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ֵ�
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷��� �� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.

	�迭�� �ٸ� �迭�� ��°�� ������ �� ����.
	>>string������ �̰��� �����ϴ�.
	*/
	/*char char1[20];
	char char2[20] = "JAGUAR";
	string str1;
	string str2 = "TIGER";
	str1 = str2;
	cout << str1 << endl;
	cout << str1[0] << endl;*/
	//����ü : �ٸ� ���������� ���Ǵ� �������� ����
	//�迭 : ���� ���������� ����
	/*struct runner 
		{
			string name;
			string position;
			float height;
			float weight;
		} run3;
	runner run1, run2 = { "Diluc Ragnvindr", "Striker",185,89 };
	run1.name = "Mizue Lee";
	run1.position = "Goll Keeper";
	run1.height = 167.7;
	run1.weight = 59.0;
	

	cout << "���� �Ұ�" << endl;
	cout << "ù ��° ����\n�̸� : " << run1.name << "\n������ : " << run1.position << "\nŰ : " << run1.height << "\n������ : " << run1.weight << endl;
	cout << "�� ��° ����\n�̸� : " << run2.name << "\n������ : " << run2.position << "\nŰ : " << run2.height << "\n������ : " << run2.weight << endl;


	runner run[2] = {
		{"Zhongli","Adepti",189,90},
		{"Childe","Fatus",187,95}
	};
	cout << run[0].name << endl;*/
	/*
		//����ü : �ٸ� ���������� ���Ǵ� �������� ����
		//cf) �迭 : ���� ���������� ����
		//�౸����
		struct runner
		{
			string name;
			string position;
			int height;
			int weight;
			//������ ����ü�� ��������
		} B;


		runner A = {
			"Son",
			"Striker",
			183,
			77
		};

		cout << A.name << endl;
		cout << A.position << endl;
		cout << A.height << endl;
		cout << A.weight << endl;
		//cout << A << endl; �� �ȵǳ�? -> ������

		B = {}; //�迭ó�� �ƹ��͵� �ȳ����� 0���� �ʱ�ȭ��.

		cout << B.name << endl;
		cout << B.position << endl;
		cout << B.height << endl;
		cout << B.weight << endl;

		//�� �����͵� ��� �� ����� ����


		runner A[2] = {
			{"A", "A", 1, 1},
			{"B","B",2,2}
		};
		cout << A[0].height << endl;
	*/
	//����ü�� ����ü
//����ü(union)
//���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.
//union MyUnion
//{
//	int intVal;
//	long longVal;
//	float floatVal;
//};
//
//MyUnion test;
//test.intVal = 3;
//cout << test.intVal << endl;
//
//test.longVal = 33;
//cout << test.intVal << endl;
//cout << test.longVal << endl;
//
//test.floatVal = 3.3;
//cout << test.intVal << endl;
//cout << test.longVal << endl;
//cout << test.floatVal << endl;
//����ü(enum)
//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.
//spectrum�� ���ο� �������� �̸����� ����
//0���� +1�Ͽ� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����
//�ʱ�ȭ �ÿ� ������ ���� ����
//enum spectrum {red=0, orange=1, yellow=2, green=3, blue=5, indigo=8, violet=13};
//
//spectrum a = red;
//cout << a << endl;
//
//int b;
//b = blue;
//cout << b << endl;
//b = blue + 3;
//cout << b << endl;
// 
	//������.........
	//int val = 3;
	//cout << &val << endl;
	////C++ ; ��ü���� ���α׷���
	////������ �ð��� �ƴ� ���� �ð��� ��� ������ ���� �� �ִ�.
	////�׶��׶� ��Ȳ�� �°� ���뼺 �ְ�
	////ex. �迭 ����
	////�緡�� ������ ���α׷��� : �迭�� ũ�Ⱑ �̸� ������
	////��ü���� ���α׷��� : �迭�� ũ�⸦ ���� �ð��� ������ �� ����
	////������ : ����� �ּҿ� �̸��� ���δ�.
	////��, �����ʹ� �������� �̸��� �ּҸ� ��Ÿ��
	////������ ����, ���� ���� ������ * 
	//int *a; //c style
	//int* b; //c++ style
	//int* c, d; //c�� ������ ����, d�� int�� ����
	//int a = 6;
	//int* b;
	//b = &a;
	//cout << "a�� �� " << a << endl;
	//cout << "*b�� �� " << *b << endl;
	//cout << "a�� �ּ� " << &a << endl;
	//cout << "*b�� �ּ� " << b << endl;
	//*b = *b + 1;
	//cout << "���� a�� ���� " << a << endl;
	////new ������
	////� ���������� ���ϴ��� new�����ڿ��� �˷��ָ�
	////new �����ڴ� �׿� �˸��� ũ���� �޸� ����� ã�Ƴ��� �� ����� �ּҸ� ������
	//int* pointer = new int;
	////�� ��� �����ʹ� �޸� ��ü�� ����Ű��
	////�޸� ������ ����ڿ��� �� �� �ִ�
	//delete pointer;
	////delete ������
	////����� �޸𸮸� �ٽ� �޸� Ǯ�� ȯ��
	////ȯ���� �޸𸮴� ���α׷��� �ٸ� �κ��� �ٽ� ���
	////��� ���� �ݵ�� delete�� �������
	//int* ps = new int;
	////�޸� ���
	//delete ps;
	////new�� �������� ���� �޸𸮸� delete�� ������ �� ����
	////���� �޸� ����� ���޾� �� �� delete�� ������ �� ����
	////new[]�� �޸𸮸� ������ ��� delete[]�� �����Ѵ�
	////���ȣ�� ������� �ʾҴٸ� delete�� ���ȣ�� ������� �ʾƾ� �Ѵ�.
	//
	//double* p3 = new double[3];
	//p3[0] = 1.2;
	//p3[1] = 2.5;
	//p3[2] = 7.8;
	//cout << "p[3] is " << p3[1] << ".\n";
	//p3 = p3 + 1;
	//cout << "Now p3[0] is " << p3[0] << " and ";
	//cout << "p3[1] is " << p3[1] << ".\n";
	//p3 = p3 - 1;
	//delete[] p3;

	//char animal[SIZE];
	//char* ps;
	//cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	//cin >> animal;
	//ps = new char[strlen(animal) + 1]; //��ĭ �� �˳��ϰ�
	//strcpy(ps, animal);
	//cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
	//cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, ";
	//cout << "�� �ּҴ� " << (int*)animal << "�Դϴ�." << endl;
	//cout << "����� ���� �̸��� " << ps << "�̰�, ";
	//cout << "����� �ּҴ� " << (int*)ps << "�Դϴ�." << endl;

	//���� �޸� dynamic memory
	/*
	�������� �� �� �迭�� ũ�⸦ �����ϴ� �� ����
	������ �� �迭�� ũ�⸦ �����ϴ� ���� �޸� �������� �ξ� ����
	�޸� ������ new�� ����Ͽ� ���� ����ü�� ���� ����
	������ �ð��� �ƴ� ���� �ð��� �޸𸮸� ���� �޴°�
	*/

	//���� ����ü ����
	//temp* ������ = new temp;
	//��� ������ : ->
	struct MyStruct
	{
		char name[20];
		int age;
	};

	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��Ͻʽÿ�" << endl;
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�" << endl;
	cin >> (*temp).age; //��?

	cout << temp->name << "��, �ȳ��ϼ���!" << endl;
	cout << "����� " << temp->age << "�� �̱���!";

	return 0;
}