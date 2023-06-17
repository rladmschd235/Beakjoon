#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<string, string, greater<string>> employee;
	string name, commute;
	int N;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> name >> commute;
		employee[name] = commute;
	}

	for (auto e : employee)
	{
		if (e.second == "enter")
		{
			cout << e.first << '\n';
		}
	}
}