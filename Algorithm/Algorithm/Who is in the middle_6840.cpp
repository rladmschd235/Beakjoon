#include <iostream>
using namespace std;

int main()
{
	int arr[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 2; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}

	cout << arr[1];
}