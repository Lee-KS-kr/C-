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
		cout <<"���� ����!" << endl;
		//m_health = 100;
		//m_attack = 100;
		//m_defense = 100;
	}

	Monster(int health, int attack, int defense) 
		: m_health(health), m_attack(attack), m_defense(defense)
	{
		cout << "���� ����!" << endl;
		//m_health = health;
		//m_attack = attack;
		//m_defense = defense;
	}

	void Attack() {
		cout << "����" << endl;
	}

	void Defense() {
		cout << "���" << endl;
	}

	void info() {
		cout << "����� : "<<m_health<< endl;
		cout << "���ݷ� : "<<m_attack <<endl;
		cout << "���� : "<<m_defense <<"\n\n"<<endl;
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
	rat.SetName("��");
	cout <<"��, �߻��� "<<rat.GetName() << "�� ��Ÿ����!" << endl;
	rat.info();

	Monster slime(200, 200, 200);
	slime.SetName("������");
	cout << "��, �߻��� " << slime.GetName() << "�� ��Ÿ����!" << endl;
	slime.info();

	return 0;
}