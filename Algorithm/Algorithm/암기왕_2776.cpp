#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T, N, M, X;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		unordered_set<int> set;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> X;
			set.insert(X);
		}
		cin >> M;
		for (int i = 0; i < M; i++)
		{
			cin >> X;
			if (set.find(X) != set.end())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
	}
}