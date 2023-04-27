#include <iostream>
using namespace std;

int main()
{
	int current[6] = { 0 };
	int origin[6] = { 1, 1, 2, 2, 2, 8 };
	int need[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		cin >> current[i];
		need[i] = origin[i] - current[i];
	}

	for (int j = 0; j < 6; j++)
	{
		cout << need[j] << " ";
	}
}