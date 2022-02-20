#include <iostream>
#include <string>

using namespace std;

class Monster {
private:
	int m_health;
	int m_attack;
	int m_defense;
	string m_name;

public:
	Monster() 
		: m_health(100), m_attack(100), m_defense(100)
	{
		cout <<"몬스터 출현!" << endl;
		//m_health = 100;
		//m_attack = 100;
		//m_defense = 100;
	}

	Monster(int health, int attack, int defense) 
		: m_health(health), m_attack(attack), m_defense(defense)
	{
		cout << "몬스터 출현!" << endl;
		//m_health = health;
		//m_attack = attack;
		//m_defense = defense;
	}

	void Attack() {
		cout << "공격" << endl;
	}

	void Defense() {
		cout << "방어" << endl;
	}

	void info() {
		cout << "생명력 : "<<m_health<< endl;
		cout << "공격력 : "<<m_attack <<endl;
		cout << "방어력 : "<<m_defense <<"\n\n"<<endl;
	}

	void SetName(string value) {
		m_name = value;
	}
	
	string GetName() {
		return m_name;
	}
};

int main()
{
	Monster rat;
	rat.SetName("쥐");
	cout <<"앗, 야생의 "<<rat.GetName() << "가 나타났다!" << endl;
	rat.info();

	Monster slime(200, 200, 200);
	slime.SetName("슬라임");
	cout << "앗, 야생의 " << slime.GetName() << "이 나타났다!" << endl;
	slime.info();

	return 0;
}