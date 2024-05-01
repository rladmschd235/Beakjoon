#include <iostream>
using namespace std;

int onion[1000000];
int S, C;

long long BinarySearch(int max, long long sum)
{
	long long mid = 0, result = 0;
	int lef = 1, rig = max;

	while (lef <= rig)
	{
		mid = (lef + rig) / 2;

		long long count = 0;

		for (int i = 0; i < S; i++)
		{
			count += onion[i] / mid;
		}

		if (count >= C)
		{
			lef = mid + 1;
			result = mid;
		}
		else
		{
			rig = mid - 1;
		}
	}

	return sum - (result * C);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	long long sum = 0, max = 0;

	cin >> S >> C;

	for (int i = 0; i < S; i++)
	{
		cin >> onion[i];

		sum += onion[i];

		if (onion[i] > max)
		{
			max = onion[i];
		}
	}

	cout << BinarySearch(max, sum);
}