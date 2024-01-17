#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int s = 0, n, x;
	string command;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> command;

		if (command == "add")
		{
			cin >> x;
			s |= (1 << x);
		}
		else if (command == "remove")
		{
			cin >> x;
			s &= ~(1 << x);
		}
		else if (command == "check")
		{
			cin >> x;
			if (s & (1 << x))
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (command == "toggle")
		{
			cin >> x;
			s = s ^ (1 << x);
		}
		else if (command == "all")
		{
			s = (1 << 21) - 1;
		}
		else if (command == "empty")
		{
			s = 0;
		}
	}
}