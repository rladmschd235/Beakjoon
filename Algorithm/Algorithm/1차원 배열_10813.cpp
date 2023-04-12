#include<iostream>
using namespace std;

int main()
{
	int N, M, i, j;
	int basket[100] = { 0 };
	cin >> N >> M;

	for (int count = 0; count < N; count++)
	{
		basket[count] = count + 1;
	}

	for (int cycle = 0; cycle < M; cycle++)
	{
		cin >> i >> j;
		if (i != j)
		{
			int temp = basket[i-1];
			basket[i-1] = basket[j-1];
			basket[j-1] = temp;
		}
		else
		{
			continue;
		}
	}

	for (int printCycle = 0; printCycle < N; printCycle++)
	{
		cout << basket[printCycle] << " ";
	}
}