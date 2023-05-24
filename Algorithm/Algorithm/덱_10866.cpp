#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	deque<int> array;

	int N, inputValue;
	string str;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;

		if (str == "push_front")
		{
			cin >> inputValue;
			array.push_front(inputValue);
		}
		else if (str == "push_back")
		{
			cin >> inputValue;
			array.push_back(inputValue);
		}
		else if (str == "pop_front")
		{
			if (array.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << array.front() << "\n";
				array.pop_front();
			}
		}
		else if (str == "pop_back")
		{
			if (array.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << array.back() << "\n";
				array.pop_back();
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
			else
			{
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
	}
}