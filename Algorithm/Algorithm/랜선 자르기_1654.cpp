#include <iostream>
using namespace std;

long long LANCable[10000];
int K, N;

long long BinarySearch(long long max)
{
	long long lef = 1, rig = max, result = 0;

	while (lef <= rig)
	{
		long long mid = (lef + rig) / 2;

		int count = 0;

		for (int i = 0; i < K; i++)
		{
			count += LANCable[i] / mid;
		}

		if (count >= N)
		{
			result = mid;
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
	long long max = 0;

	cin >> K >> N;

	for (int i = 0; i < K; i++)
	{
		cin >> LANCable[i];

		if (LANCable[i] > max)
		{
			max = LANCable[i];
		}
	}

	cout << BinarySearch(max);
}