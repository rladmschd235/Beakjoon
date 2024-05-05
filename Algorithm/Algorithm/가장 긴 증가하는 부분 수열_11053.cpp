#include <iostream>
using namespace std;

int A[1000];
int B[1000];

int main()
{
	int N, result = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	fill_n(B, N, 1);

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j] < A[i])
			{
				B[i] = max(B[i], B[j] + 1);
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (result < B[i])
		{
			result = B[i];
		}
	}

	cout << result;
}