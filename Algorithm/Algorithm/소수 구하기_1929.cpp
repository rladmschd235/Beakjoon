#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool isNotPrime = false;

	int m, n;

	cin >> m >> n;

	vector<bool> v(n + 1, 1);

	for (int i = 2; i*i < n + 1; i++)
	{
		if (v[i])
		{
			for (int j = i * 2; j < n + 1; j += i)
			{
				v[j] = 0;
			}
		}
	}

	for (int i = m; i < v.size(); i++)
	{
		if (v[i]&&i!=1) cout << i << "\n";
	}
}