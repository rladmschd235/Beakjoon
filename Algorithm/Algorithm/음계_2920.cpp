#include <iostream>
using namespace std;

int main()
{
	int sound[8] = { 0 };
	int ascendingCheck = 0;
	int descendingCheck = 0;
	int descendingCount = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> sound[i];
	}

	for (int j = 1; j <= 8; j++)
	{
		if (sound[j-1] == j)
		{
			ascendingCheck++;
		}
	}
	for (int k = 8; k >= 1; k--)
	{
		if (sound[descendingCount] == k)
		{
			descendingCheck++;
		}
		descendingCount++;
	}

	if (ascendingCheck == 8)
	{
		cout << "ascending";
	}
	else if(descendingCheck == 8)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
}