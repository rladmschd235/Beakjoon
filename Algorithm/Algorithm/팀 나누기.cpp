#include <iostream>
using namespace std;

int main()
{
	int array[4] = { 0 };
	int sum1, sum2;

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		cin >> array[i];
	}

	for (int i = (sizeof(array) / sizeof(int)) - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = array[j];
			}
		}
	}

	sum1 = array[0] + array[3];
	sum2 = array[1] + array[2];

	if (sum1 - sum2 > 0)
	{
		cout << sum1 - sum2;
	}
	else
	{
		cout << (sum1 - sum2) * -1;
	}
}