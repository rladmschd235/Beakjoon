#include <iostream>
using namespace std;

int main()
{
	int array[3] = { 0 };
	int inputArray[3] = { 0 };
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> inputArray[i];
	}

	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			if (inputArray[j] > inputArray[k])
			{
				count++;
			}
			else if(inputArray[j] == inputArray[k])
			{
				continue;
			}
		}
		array[count] = inputArray[j];
		count = 0;
	}

	for (int l = 0; l < 3; l++)
	{
		cout << array[l] << " ";
	}
}