#include <iostream>
using namespace std;

long long snack[1000000];
int N, M;

int BinarySearch(long long max)
{
	int lef = 1, rig = max, mid = 0, result = 0; 

	while (lef <= rig)
	{
		mid = (lef + rig) / 2;

		int count = 0;

		for (int i = 0; i < N; i++)
		{
			count += snack[i] / mid;
		}

		if (count >= M) // 크거나 같을 때
		{
			lef = mid + 1;
			result = mid;
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long max = 0;

	cin >> M >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> snack[i];

		if (max < snack[i])
		{
			max = snack[i];
		}
	}

	cout << BinarySearch(max);
}