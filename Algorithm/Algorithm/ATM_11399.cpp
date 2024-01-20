#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<pair<int, int>> peoples;
	int n, time, before = 0, result = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> time;
		peoples.push_back({ time, i });
	}

	sort(peoples.begin(), peoples.end());

	for (auto people : peoples)
	{
		result += (people.first + before);
		before = (people.first + before);
	}

	cout << result;
}