#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<pair<int, int>> room;
	int A, B, N, endTime, result = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		room.push_back({B, A});
	}

	sort(room.begin(), room.end());

	endTime = -1;

	for (auto r : room)
	{
		if (r.second >= endTime)
		{
			result++;
			endTime = r.first;
		}
	}

	cout << result;
}