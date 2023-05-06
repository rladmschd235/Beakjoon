#include <iostream>
using namespace std;

int main()
{
	int MG, MS, sumMG = 0, sumMS = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> MG;
		sumMG += MG;
	}

	for (int j = 0; j < 4; j++)
	{
		cin >> MS;
		sumMS += MS;
	}

	sumMG > sumMS ? cout << sumMG : cout << sumMS;
}