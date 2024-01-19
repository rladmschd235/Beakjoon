#include <iostream>
using namespace std;

int DP[1001] = { 0,1,3,5 };
int main()
{
	int n;
	cin >> n;
	for (int i = 3; i < n + 1; i++)
	{
		DP[i] = ((DP[i - 2] * 2) + DP[i - 1]) % 10007;
	}
	cout << DP[n];
}