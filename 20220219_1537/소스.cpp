#include <iostream>

using namespace std;

class Monster {
private:
	int _health;
	int _defense;
	int _attack;

public:
	Monster() : _health(0), _defense(0), _attack(0) {}

	Monster(int health, int defense, int attack) :
		_health(health), _defense(defense), _attack(attack) {}

	void init(int health, int defense, int attack) {
		_health = health;
		_defense = defense;
		_attack = attack;
	}

	void Attack() {
		cout << _attack << " �� ������ ����" << endl;
	}

	void Move() {
		cout << "�̵�" << endl;
	}

	void info() {
		cout << "�����" << _health << endl;
		cout << "����" << _defense<< endl;
		cout << "���ݷ�" << _attack << endl;
	}
};

int main() {
	Monster* pa = new Monster(10, 20, 30);//���� �޸� ���� �Ҵ�
	pa->Attack();
	pa->info();
	delete pa; //�Ҵ� ���� �����޸� ������ �ݵ�� ��ȯó�� �ؾ��Ѵ�

	//����
	float a;
	int count = 0; //���ú���, �ڵ�����

	cout << "���� ���� ������ �Է��ϼ��� : ";
	cin >> count;

	Monster* array = new Monster[count]; //�����迭�� �Ҵ�

	for (int i = 0; i < count; i++) {
		array[i].init(i, i, i);
		array[i].Attack();
	}

	delete[] array; //�����迭 �Ҵ� ���� ��û

	return 0;
}