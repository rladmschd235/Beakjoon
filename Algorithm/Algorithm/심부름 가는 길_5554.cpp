#include <iostream>
using namespace std;

int main()
{
	int sec, sum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> sec;
		sum += sec;
	}

	cout << sum / 60 << endl << sum % 60;
}