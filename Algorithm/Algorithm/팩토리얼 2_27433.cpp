#include <iostream>
using namespace std;

long long int Factorial(long long int n)
{
	if (n == 0)
		return 1;
	else if (n >= 1)
		return n * Factorial(n - 1);
}

int main()
{
	long long int N;
	cin >> N;

	cout << Factorial(N);
}