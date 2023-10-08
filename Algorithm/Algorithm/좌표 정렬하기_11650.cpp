#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<pair<int, int>> coordinate;

	int n, x, y;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		coordinate.insert({ x, y });
	}

	for (auto c : coordinate)
	{
		cout << c.first << " " << c.second << "\n";
	}
}