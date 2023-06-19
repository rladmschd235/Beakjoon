#include <iostream>
using namespace std;

int main()
{
	int minTime[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> minTime[i];
	}

	if (minTime[1] == minTime[2])
	{
		cout << "Anything";
	}
	else if (minTime[1] < minTime[2])
	{
		cout << "Bus";
	}
	else if (minTime[2] < minTime[1])
	{
		cout << "Subway";
	}
}