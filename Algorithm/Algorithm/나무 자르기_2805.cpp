#include<iostream>
using namespace std;

int tree[1000000];
int M, N, maxHigh = 0;

int BinarySearch()
{
	int mid = 0, rig = maxHigh, lef = 0, result = 0;

	while (lef <= rig)
	{
		mid = (lef + rig) / 2;

		long long sum = 0;

		for (int i = 0; i < N; i++)
		{
			if (tree[i] > mid)
			{
				sum += tree[i] - mid;
			}
		}

		if (sum >= M)
		{
			if (result < mid)
			{
				result = mid;
			}
		}

		if (sum > M)
		{
			lef = mid + 1;
		}
		else
		{
			rig = mid - 1;
		}
	}

	return result;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tree[i];

		if (maxHigh < tree[i])
		{
			maxHigh = tree[i];
		}
	}

	cout << BinarySearch();
}