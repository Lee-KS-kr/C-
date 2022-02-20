#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b = 20;

	int sum = a + b;
	cout << a << " + " << b << " = " << sum << endl;
	sum = a - b;
	cout << a << " - " << b << " = " << sum << endl;
	sum = a * b;
	cout << a << " * " << b << " = " << sum << endl;
	sum = a / b;
	cout << a << " / " << b << " = " << sum << endl;

	float sumf = 0.0f;
	sumf = a / b;
	cout << a << " / " << b << " = " << sumf << endl;
	sumf = (float)a / b;
	cout << a << " / " << b << " = " << sumf << endl;

	return 0;
}