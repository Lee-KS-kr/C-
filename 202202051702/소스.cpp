#include <iostream>

using namespace std;

int main() {
	int a = 20, b = 30;
	int result = (a > b) ? a : b;
	cout << "a > b = " << result << endl;

	cout << "a = " << a << endl;
	a++;
	cout << "a = " << a << endl;
	++a;
	cout << "a = " << a << endl;

	result = ++a;
	cout << "result = " << result << endl;
	cout << "a = " << a << endl;

	result = a++;
	cout << "result = " << result << endl;
	cout << "a = " << a << endl;

	return 0;
}