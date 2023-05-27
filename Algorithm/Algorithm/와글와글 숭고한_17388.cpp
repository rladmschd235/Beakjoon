#include <iostream>
using namespace std;

int main()
{
	int sum = 0, min = 101, minIndex = 0;
	int participation[3] = {};

	for (int i = 0; i < 3; i++)
	{
		cin >> participation[i];
		if (participation[i] < min)
		{
			min = participation[i];
			minIndex = i;
		}
		sum += participation[i];
	}
	
	if (sum >= 100)
	{
		cout << "OK";
	}
	else
	{
		switch (minIndex)
		{
			case 0:
				cout << "Soongsil";
				break;
			case 1:
				cout << "Korea";
				break;
			case 2:
				cout << "Hanyang";
				break;
		}
	}
}
