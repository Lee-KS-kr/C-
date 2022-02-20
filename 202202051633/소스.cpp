#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int randValue = rand();
	int result = randValue % 4;

	cout << "·£´ý °ª : " << randValue << endl;
	cout << "°á°ú : " << result << endl;

	return 0;
}