#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char c[50] = {};
	long long r = 1, m = 1234567891, result = 0;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	for (int i = 0; i < n; i++)
	{
		result = (result +(c[i] - 'a' + 1) * r) % m;
		r = (r * 31) % m;
	}

	cout << result;
}