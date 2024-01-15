#include <iostream>
using namespace std;

int DP[11] = { 1 };
int main()
{
	int T, N;
	cin >> T;

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		for (int i = 3; i < N + 1; i++)
		{
			DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
		}
		cout << DP[N] << "\n";
	}
}