#include<iostream>
using namespace std;

int tree[1000000];
long long int M, N;

int BinarySearch(int max)
{
	int mid = 0, rig = max, lef = 0, result = 0;

	while (lef <= rig)
	{
		mid = (lef + rig) / 2;

		long long int sum = 0;

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
	int max = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tree[i];

		if (max < tree[i])
		{
			max = tree[i];
		}
	}

	cout << BinarySearch(max);
}