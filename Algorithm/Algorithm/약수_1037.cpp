#include <iostream>
using namespace std;

int main()
{
	int N, input, min = 1000000, max = 2;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		if (input > max)
		{
			max = input;
		}
		if (input < min)
		{
			min = input;
		}
	}

	cout << max * min;
}