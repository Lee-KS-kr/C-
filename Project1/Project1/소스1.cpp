#include <iostream>

using namespace std;

int main() 
{
	//�ݺ����̶�?
	/*
	1. �ݺ����� ����� ī���� ���� �ʱ�ȭ
	2. �ݺ����� ������ ������ '���� �˻�'
	3. �ݺ��� ��ü�� ����
	4. ī������ ���� ��ȭ
	*/

	/*for (int i = 5; i > 0; i--) {
		cout << i << "��°�Դϴ�.\n";
	}

	string str = "Panda";
	bool a = true; bool b = false;
	int i = 0;
	while (str[i] !='\0') {
		cout << str[i] << endl;
		i++;
	}

	while (b) {
		cout << "hello\n";
	}

	do {
		cout << "do-while�� �Դϴ�.\n";
	} while (b);*/

	//���� ������, ���� ������
	/*int a = 10;
	int b = 10;
	
	cout << "a�� " << a << ", b�� " << b << endl;
	cout << "a++�� " << a++ << endl;
	cout << "++b�� " << ++b << endl;*/

	//�迭 ��� �ݺ���
	//�迭�� ������ ���� ���� �ʱ�ȭ�Ǿ� �ִ� ���
	//0���� �ʱ�ȭ�� ���� ��� ��µ�
	int a[5] = { 1,3,5,7,9};
	for (int i : a) {
		cout << i << endl;
	}
	cout << "\n";

	//��ø ���� : 2���� �迭
	int temp[4][5] = {
		{1,2,3,4,5},{11,22,33,44,55},
		{111,222,333,444,555},{1111,2222,3333,4444,5555}
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	return 0;
}