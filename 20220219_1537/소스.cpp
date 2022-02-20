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
		cout << _attack << " 의 힘으로 공격" << endl;
	}

	void Move() {
		cout << "이동" << endl;
	}

	void info() {
		cout << "생명력" << _health << endl;
		cout << "방어력" << _defense<< endl;
		cout << "공격력" << _attack << endl;
	}
};

int main() {
	Monster* pa = new Monster(10, 20, 30);//동적 메모리 공간 할당
	pa->Attack();
	pa->info();
	delete pa; //할당 받은 동적메모리 공간은 반드시 반환처리 해야한다

	//변수
	float a;
	int count = 0; //로컬변수, 자동변수

	cout << "만들 몬스터 갯수를 입력하세요 : ";
	cin >> count;

	Monster* array = new Monster[count]; //동적배열을 할당

	for (int i = 0; i < count; i++) {
		array[i].init(i, i, i);
		array[i].Attack();
	}

	delete[] array; //동적배열 할당 해제 요청

	return 0;
}