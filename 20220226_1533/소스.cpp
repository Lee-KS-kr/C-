#include <iostream>

using namespace std;

class Barista {
public:
	void MakeDirnk() {
		cout << "���Ḧ ����ϴ�." << endl;
	}
};

class Cashier {
private:
	Barista* _barista;

public:
	void SetBarista(Barista* barista) {
		_barista = barista;
	}

	void OrderedDrink() {
		cout << "���� �ֹ��� �޽��ϴ�." << endl;
		_barista->MakeDirnk();
	}
};

class Guest {
public:
	void OrderingDrink(Cashier& ref) {
		cout << "���� �ֹ��� �մϴ�." << endl;
		ref.OrderedDrink();
	}
};

int main() {
	Guest guest;
	Cashier cashier;
	Barista barista;

	cashier.SetBarista(&barista);

	guest.OrderingDrink(cashier);

	return 0;
}