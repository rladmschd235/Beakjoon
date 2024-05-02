#include <iostream>
using namespace std;

long long jewelryBox[300000];
long long N, M;

long long BinarySearch(long long max)
{
	long long left = 1, right = max, mid = 0, result = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;	

		long long count = 0;

		for (int i = 0; i < M; i++)
		{
			if (jewelryBox[i] % mid == 0)
			{
				count += jewelryBox[i] / mid;	
			}
			else
			{
				count += (jewelryBox[i] / mid) + 1;
			}
		}

		if (count > N)
		{
			left = mid + 1;
		}
		else
		{
			if (result == 0 || result > mid)
			{
				result = mid;
			}
			right = mid - 1;
		}
	}

	return result;
}

int main()
{
	long long max = 0, sum = 0;

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> jewelryBox[i];

		if (jewelryBox[i] > max)
		{
			max = jewelryBox[i];
		}
	}

	cout << BinarySearch(max);
}