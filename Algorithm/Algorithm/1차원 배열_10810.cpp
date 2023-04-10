#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j, k;
	cin >> N >> M;
	
	//동적할당 가능
	int* basket = new int[N];
	fill(basket, basket + N, 0);

	//int arr[10];
	//cout << sizeof(arr) // 40 아니고 10
	//fill(basket, basket + sizeof(basket) / sizeof(int), 0);

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