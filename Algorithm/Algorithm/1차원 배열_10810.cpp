#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j, k;
	cin >> N >> M;
	
	int basket[100] = { 0 };
	// fill(basket, basket + sizeof(basket) / sizeof(int), 0);

	for (int h = 0; h < M; h++)
	{
		cin >> i >> j >> k;
		for (int cycle = i - 1; cycle < j; cycle++) {
			basket[cycle] = k;
		}
	}

	for (int num = 0; num < N; num++)
	{
		cout << basket[num] << " ";
	}
}