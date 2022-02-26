#include <iostream>
#include <string>

using namespace std;


// ���������Լ��� �ϳ��� ������ �ִ� Ŭ������ �߻�Ŭ������� �մϴ�.
// �߻�Ŭ������ �ڱ� �ڽ��� ��ü�� ���� �� �ִ� �ɷ��� ����մϴ�.
class Drink {
private:
    string _name = "����";

public:
    Drink() {}
    Drink(string name)
        : _name(name) {}

    string GetName() {
        return _name;
    }

    virtual void MakingDrink() = 0;      // ���� ���� �Լ�
};

class Coffee : public Drink {
public:
    Coffee()
        : Drink("Coffee")
    {}

    void MakingDrink() override {   // �Ϲݸ���Լ�
        cout << "Ŀ�Ǹ� ����ϴ�." << endl;
    }

};

class Latte : public Drink {
public:
    Latte()
        : Drink("Latte")
    {}

    void MakingDrink() override {
        cout << "�󶼸� ����ϴ�." << endl;
    }


};

class Cola : public Drink {
public:
    Cola()
        : Drink("Cola")
    {}

    void MakingDrink() override {
        cout << "�ݶ� ����ϴ�." << endl;
    }
};

class Aid : public Drink {
public:
    Aid()
        :Drink("Aid")
    {}

    void MakingDrink() override {
        cout << "���̵带 ����ϴ�." << endl;
    }
};


// �Ϲݸ���Լ��� ���� Ÿ�Կ� ���ؼ� �۵��մϴ�.

// �������Լ��� ������ ��� Ÿ�Կ� ���ؼ� �۵��մϴ�.

class Barista {
public:
    void MakeDrink(Drink& drink) {
        cout << drink.GetName() << "�� ���鵵�� ��ŵ�ϴ�." << endl;

        drink.MakingDrink();
    }
};

class Cashier {
private:
    Barista* _barista;

public:

    void SetBarista(Barista* barista) {
        _barista = barista;
    }

    void OrderedDrink(Drink& drink) {
        cout << drink.GetName() << "�� �ֹ��� �޽��ϴ�." << endl;
        _barista->MakeDrink(drink);
    }
};

class Guest {

public:
    void OrderingDrink(Drink& drink, Cashier& ref) {
        cout << drink.GetName() << "�� �ֹ��� �մϴ�." << endl;
        ref.OrderedDrink(drink);
    }
};

int main() {
    //Drink drink;


    Guest guest;
    Cashier cashier;
    Barista barista;

    Coffee coffee;
    Latte latte;
    Cola cola;

    Aid aid;

    cashier.SetBarista(&barista);

    guest.OrderingDrink(coffee, cashier);

    cout << endl;
    guest.OrderingDrink(latte, cashier);


    cout << endl;
    guest.OrderingDrink(cola, cashier);


    cout << endl;
    guest.OrderingDrink(aid, cashier);



    return 0;
}