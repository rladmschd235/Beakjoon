#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j;
	cin >> N >> M;

	int* basket = new int[N];
	fill(basket, basket + N, 0);

	for (int i = 1; i <= N; i++)
	{
		basket[i - 1] = i;
	}

	for (int cycle1 = 0; cycle1 < M; cycle1++)
	{
		cin >> i >> j;
		int inum = i - 1;

		for (int cycle2 = j-1; cycle2 > inum; cycle2--)
		{
			if (i != j)
			{
				int temp = basket[cycle2];
				basket[cycle2] = basket[inum];
				basket[inum] = temp;
				inum++;
			}
			else
			{
				continue;
			}
		}
	}

	for (int print = 0; print < N; print++)
	{
		cout << basket[print] << " ";
	}
}