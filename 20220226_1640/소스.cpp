#include <iostream>
#include <string>

using namespace std;

class Coffee {
private:
    string _name = "Coffee";

public:
    string GetName() {
        return _name;
    }
};

class Latte {
private:
    string _name = "Latte";

public:
    string GetName() {
        return _name;
    }
};

class Tea {
private:
    string _name = "Tea";

public:
    string GetName() {
        return _name;
    }
};

class Barista {
public:
    void MakeDrink(Coffee& drink) {
        cout << drink.GetName() << "�� ����ϴ�." << endl;
    }

    void MakeDrink(Latte& drink) {
        cout << drink.GetName() << "�� ����ϴ�." << endl;
    }
    
    void MakeDrink(Tea& drink) {
        cout << drink.GetName() << "�� ����ϴ�." << endl;
    }

};

class Cashier {
private:
    Barista* _barista;

public:

    void SetBarista(Barista* barista) {
        _barista = barista;
    }

    void OrderedDrink(Coffee& drink) {
        cout << drink.GetName() << "�� �ֹ��� �޽��ϴ�." << endl;
        _barista->MakeDrink(drink);
    }

    void OrderedDrink(Latte& drink) {
        cout << drink.GetName() << "�� �ֹ��� �޽��ϴ�." << endl;
        _barista->MakeDrink(drink);
    }
    
    void OrderedDrink(Tea& drink) {
        cout << drink.GetName() << "�� �ֹ��� �޽��ϴ�." << endl;
        _barista->MakeDrink(drink);
    }

};

class Guest {

public:
    void OrderingDrink(Coffee& drink, Cashier& ref) {
        cout << drink.GetName() << "�� �ֹ��� �մϴ�." << endl;
        ref.OrderedDrink(drink);
    }

    void OrderingDrink(Latte& drink, Cashier& ref) {
        cout << drink.GetName() << "�� �ֹ��� �մϴ�." << endl;
        ref.OrderedDrink(drink);
    }
    
    void OrderingDrink(Tea& drink, Cashier& ref) {
        cout << drink.GetName() << "�� �ֹ��� �մϴ�." << endl;
        ref.OrderedDrink(drink);
    }

};

int main() {
    Guest guest;
    Cashier cashier;
    Barista barista;

    Coffee coffee;
    Latte latte;
    Tea tea;

    cashier.SetBarista(&barista);

    guest.OrderingDrink(coffee, cashier);

    cout << endl;
    guest.OrderingDrink(latte, cashier);

    cout << endl;
    guest.OrderingDrink(tea, cashier);


    return 0;
}