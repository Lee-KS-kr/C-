#include <iostream>

using namespace std;

int main() {
	int a = 20;
	float b = 1.2f;

	a = (int)b; //����� ����ȯ
	a += 1; //a=a+1;

	int k = 30;
	if (k > 20){ //���� ���ǹ�
		cout<<"k�� 20���� Ů�ϴ�"<<endl;
	}

	if (k > 20) { //���� ���ǹ�
		cout << "k�� 20���� Ů�ϴ�." << endl;
	}
	else {
		cout << "k�� 20���� �۰ų� �����ϴ�." << endl;
	}

	if (k > 30) { //���� ���ǹ�
		cout << "k�� 30���� Ů�ϴ�" << endl;
	}
	else if (k > 20) {
		cout << "k�� 20���� Ů�ϴ�." << endl;
	}
	else if (k > 10) {
		cout << "k�� 10���� Ů�ϴ�." << endl;
	}
	else {
		cout << "k�� 10���� �۽��ϴ�." << endl;
	}

	int buttonNum;
	cout << "TV �������� ��ư ��ȣ�� �Է��ϼ���." << endl;
	cin >> buttonNum;

	switch (buttonNum) {
	case 0:
		cout << "TV ��" << endl;
		break;
	case 1:
		cout << "TV ��" << endl;
		break;
	case 2:
		cout << "���� ����" << endl;
		break;
	case 3:
	case 4:
	case 5:
	case 6:
		cout << "���� ����" << endl;
		break;

	default:
		cout << "��ȣ�� �߸� �����̽��ϴ�." << endl;
		break;
	}

	return 0;
}