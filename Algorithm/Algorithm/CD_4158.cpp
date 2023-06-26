#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int N, M, X;
	
	while (true)
	{
		unordered_set<int> uns;
		int cnt = 0;
		
		cin >> N >> M;

		if (N == 0 && M == 0)
		{
			break;
		}

		for (int i = 0; i < N; i++)
		{
			cin >> X;
			uns.insert(X);
		}

		for (int i = 0; i < M; i++)
		{
			cin >> X;
			if (uns.find(X) != uns.end())
			{
				cnt++;
			}
		}

		cout << cnt << '\n';
	}
}