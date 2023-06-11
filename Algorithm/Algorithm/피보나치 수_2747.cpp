#include <iostream>
using namespace std;

long long int remember[100];

long long int Fibo(long long int input)
{
	if (input == 0)
	{
		return 0;
	}
	else if (input <= 2)
	{
		return 1;
	}
	else if (remember[input] != 0)
	{
		return remember[input];
	}
	else
	{
		remember[input] = Fibo(input - 1) + Fibo(input - 2);
		return remember[input];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	long long int N;
	cin >> N;

	cout << Fibo(N);
}