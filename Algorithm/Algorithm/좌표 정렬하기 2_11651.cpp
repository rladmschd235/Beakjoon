#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// left < right: 오름차순, left > right: 내림차순
bool cmp(pair<int, int>& left, pair<int, int>& right)
{
	if (left.second == right.second)
	{
		return left.first < right.first;
	}
	return left.second < right.second;
}

int main()
{
	vector<pair<int, int>> pos;
	int N, x, y;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		pos.push_back({ x, y });
	}

	sort(pos.begin(), pos.end(), cmp);

	for (auto p : pos)
	{
		cout << p.first << " " << p.second << "\n";
	}
}