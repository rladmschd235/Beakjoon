#include <iostream>
#include <string>
using namespace std;

int dp[1001][1001] = {0};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string A, B;
	cin >> A >> B;

	for (int i = 1; i < A.size() + 1; i++)
	{
		for (int j = 1; j < B.size() + 1; j++)
		{
			if (A[i-1] != B[j-1])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}
	cout << dp[A.size()][B.size()];
}