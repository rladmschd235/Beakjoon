#include <iostream>
using namespace std;

int main()
{
	int N, Num, v;
	int count = 0;
	int arr[100] = {0};
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Num;
		arr[i] = Num;
	}

	cin >> v;

	for (int j = 0; j < N; j++)
	{
		if (arr[j] == v)
		{
			count++;
		}
	}

	cout << count;
}