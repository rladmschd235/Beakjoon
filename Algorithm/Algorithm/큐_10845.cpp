#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int N, input;
	string str;

	queue<int> arr;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> input;
			arr.push(input);
		}
		else if (str == "pop")
		{
			if (!arr.empty())
			{
				cout << arr.front() << "\n";
				arr.pop();
			}
			else if (arr.empty())
			{
				cout << -1 << "\n";
			}
		}
		else if (str == "size")
		{
			cout << arr.size() << "\n";
		}
		else if (str == "empty")
		{
			if (arr.empty())
			{
				cout << 1 << "\n";
			}
			else if (!arr.empty())
			{
				cout << 0 << "\n";
			}
		}
		else if (str == "front")
		{
			if (arr.empty())
			{
				cout << -1 << "\n";
			}
			else if (!arr.empty())
			{
				cout << arr.front() << "\n";
			}
		}
		else if (str == "back")
		{
			if (arr.empty())
			{
				cout << -1 << "\n";
			}
			else if (!arr.empty())
			{
				cout << arr.back() << "\n";
			}
		}
	}
}