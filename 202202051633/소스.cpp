#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int randValue = rand();
	int result = randValue % 4;

	cout << "���� �� : " << randValue << endl;
	cout << "��� : " << result << endl;

	return 0;
}