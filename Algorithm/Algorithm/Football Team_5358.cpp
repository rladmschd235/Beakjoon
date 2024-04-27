#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	while (true)
	{
		getline(cin, s);

		if (cin.eof())
		{
			break;
		}

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'i')
			{
				cout << 'e';
				continue;
			}
			if (s[i] == 'e')
			{
				cout << 'i';
				continue;
			}
			if (s[i] == 'I')
			{
				cout << 'E';
				continue;
			}
			if (s[i] == 'E')
			{
				cout << 'I';
				continue;
			}
			cout << s[i];
		}

		cout << endl;
	}
}