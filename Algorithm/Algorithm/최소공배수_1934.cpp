#include<iostream>
using namespace std;

long long int GDC(long long int A, long long int B)
{
	if (B == 0)
	{
		return A;
	}
	return GDC(B, A % B);
}

int main()
{
	long long int result;
	long long int A, B;

	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;

		if (A < B)
		{
			int temp = A;
			A = B;
			B = temp;
		}

		result = (A * B) / GDC(A, B);

		cout << result << "\n";
	}
}