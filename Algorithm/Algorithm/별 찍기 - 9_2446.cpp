#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, cnt = 1;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << ' ';
		}
		for (int j = 1; j < 2 * (N - i); j++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	for (int i = N-1; i >= 0; i--)
	{
		if (cnt > 1)
		{
			for (int j = i; j > 0; j--)
			{
				cout << ' ';
			}
			for (int j = 1; j < 2 * (N - i); j++)
			{
				cout << '*';
			}
			cout << '\n';
		}
		else
		{
			cnt++;
			continue;
		}
	}
}