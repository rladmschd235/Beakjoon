#include <iostream>
using namespace std;

int main()
{
	int N, min = 1000000, max = -1000000;
	cin >> N;
	int* A = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (max < A[i]) max = A[i];
		if (min > A[i])min = A[i];
	}

	cout << min << " " << max;
}