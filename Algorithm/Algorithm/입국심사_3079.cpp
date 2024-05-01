#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <unsigned long long> T;
vector <unsigned long long> R;
unsigned long long N, M;

unsigned long long BinarySearch()
{
	unsigned long long lef = 1, rig = T.front() * M, result = 0;

	while (lef <= rig)
	{
		unsigned long long mid = (lef + rig) / 2;
		unsigned long long cnt = 0;

		for (auto t : T)
		{
			cnt += mid / t;
		}

		if (cnt >= M)
		{
			if (result == 0 || result > mid)
			{
				result = mid;
			}
			rig = mid - 1;
		}
		else
		{
			lef = mid + 1;
		}
	}

	return result;
}

int main()
{
	unsigned long long time;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> time;

		T.push_back(time);
	}

	sort(T.begin(), T.end());

	cout << BinarySearch();
}