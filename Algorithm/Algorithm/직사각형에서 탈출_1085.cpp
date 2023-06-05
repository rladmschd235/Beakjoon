#include <iostream>
using namespace std;

int main()
{
	int min = 1001;
	int array[4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		cin >> array[i];
	}
	
	array[2] = array[2] - array[0];
	array[3] = array[3] - array[1];

	for (int i = 0; i < 4; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	
	cout << min;
}