#include <iostream>
using namespace std;

int main()
{
	int T, N, sum = 0;
	int array[100] = {0};

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		sum = 0;
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			cin >> array[i];
			sum += array[i];
		}
		cout << sum << endl;
	}
}