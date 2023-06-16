#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> noHear;
	map<string, int> ans;

	string inputName;
	int N, M, inx = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> inputName;
		noHear[inputName] = 1;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> inputName;
		if (noHear.find(inputName) != noHear.end())
		{
			ans[inputName];
		}
	}

	cout << ans.size() << '\n';

	for (auto a : ans) // ans 범위기반 for문으로 출력
	{
		cout << a.first << '\n';
	}
}