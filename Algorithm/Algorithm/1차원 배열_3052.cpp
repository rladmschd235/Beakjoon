#include <iostream>
using namespace std;

int main()
{
	int array[10] = { 0 };
	int saveArray[10] = { 0 };
	int remain = 0;
	int currentRemain = 0;
	int count = 10;

	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
		remain = array[i] % 42;

		saveArray[i] = remain;

		//if (currentRemain != remain)
		//{
		//	count++;
		//}

		//currentRemain = remain;
	}

	for (int k = 1; k < 10; k++)
	{
		for (int h = k; h < 10; h++)
		{
			if (saveArray[k - 1] == saveArray[h])
			{
				count--;
				break;
			}
		}
	}
	cout << count;
}