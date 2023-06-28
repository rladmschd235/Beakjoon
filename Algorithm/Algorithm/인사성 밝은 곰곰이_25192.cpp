#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	map<string, int> unm = {};
	int N, cnt = 0;
	string str;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;

		if (str == "ENTER")
		{
			unm = {};
			continue;
		}
		else
		{
			unm[str]++;
		}

		if (unm.find(str)->second == 1)
		{
			cnt++;
		}
		else
		{
			continue;
		}
	}

	cout << cnt;
}