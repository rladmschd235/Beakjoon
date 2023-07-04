#include <iostream>
using namespace std;

int main()
{
	int cups[3] = { 1, 0, 0 };
	int M, X, Y;

	cin >> M; 

	for (int i = 0; i < M; i++)
	{
		cin >> X >> Y;

		if (X != Y)
		{
			int temp = cups[X - 1];
			cups[X - 1] = cups[Y - 1];
			cups[Y - 1] = temp;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (cups[i] == 1)
		{
			cout << i + 1;
			return 0;
		}
	}

	cout << -1;
}