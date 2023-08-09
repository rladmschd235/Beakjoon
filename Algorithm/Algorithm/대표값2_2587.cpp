#include<iostream>
using namespace std;

int main()
{
	int array[5] = { 0 };
	int average = 0, center = 0;

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		cin >> array[i];
		average += array[i];
	}

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		for (int j = 1; j < sizeof(array) / sizeof(int) - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				int temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}

	average /= sizeof(array) / sizeof(int);
	center = array[2];

	cout << average << endl << center;
}