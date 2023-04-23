#include <iostream>
using namespace std;

int main()
{
	string N;
	cin >> N;

	int array[10] = { 0 };
	int set, max = -1, maxIndex;

	// 어떤 숫자가 몇 개인지 받을거야
	for (int i = 0; i < N.size(); i++)
	{
		for (int j = 0; j < sizeof(array) / sizeof(int); j++)
		{
			if (j == 6 || j == 9)
			{
				if (N[i] - 48 == j)
				{
					array[6] += 1;
				}
			}
			else
			{
				if (N[i] - 48 == j)
				{
					array[j] += 1;
				}
			}
		}
	}

	array[9] = array[6] / 2;
	if (array[6] % 2 == 0)
	{
		array[6] = array[6] / 2;
	}
	else if (array[6] % 2 == 1)
	{
		array[6] = array[6] / 2 + 1;
	}
	
	for (int k = 0; k < sizeof(array) / sizeof(int); k++)
	{
		if (array[k] > max)
		{
			max = array[k];
		}
	}

	cout << max;
}