#include <iostream>
#include <stack>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack<int> s;
	int N, cmd, x;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> cmd;

		if (cmd == 1)
		{
			cin >> x;

			s.push(x);
		}
		else if (cmd == 2)
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (cmd == 3)
		{
			cout << s.size() << "\n";
		}
		else if (cmd == 4)
		{
			if (s.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (cmd == 5)
		{
			if (s.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << s.top() << "\n";
			}
		}
	}
}