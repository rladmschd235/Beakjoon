#include <iostream>
using namespace std;

int cnt1 = 0, cnt2 = 0;
int f[41] = { 0 };

int Fibo1(int n)
{
	if (n == 1 || n == 2)
	{
		++cnt1;
		return 1;
	}
	return Fibo1(n - 1) + Fibo1(n - 2);
}

int Fibo2(int n)
{
	f[1] = f[2] = 1;
	for (int i = 3; i < n+1; i++)
	{
		++cnt2;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main()
{
	int n;
	cin >> n;

	Fibo1(n);
	Fibo2(n);

	cout << cnt1 << " " << cnt2;
}