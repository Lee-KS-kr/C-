#include <iostream>

using namespace std;

class Barista {
public:
	void MakeDirnk() {
		cout << "음료를 만듭니다." << endl;
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
		cout << "음료 주문을 받습니다." << endl;
		_barista->MakeDirnk();
	}
};

class Guest {
public:
	void OrderingDrink(Cashier& ref) {
		cout << "음료 주문을 합니다." << endl;
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