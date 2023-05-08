#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	queue<int> array;
	string str;
	int N;

	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		getline(cin, str);

		if (str == "pop")
		{
			if (!array.empty())
			{
				cout << array.front() << "\n";
				array.pop();
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else if (str == "size")
		{
			cout << array.size() << "\n";
		}
		else if (str == "empty")
		{
			if (array.empty())
			{
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (str == "front")
		{
			if (array.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << array.front() << "\n";
			}
		}
		else if (str == "back")
		{
			if (array.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << array.back() << "\n";
			}
		}
		else
		{
			int saveNum = stoi(str.substr(5, str.size() - 5));
			array.push(saveNum);
		}
	}
}