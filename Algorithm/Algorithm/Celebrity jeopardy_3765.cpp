#include <iostream>
using namespace std;

int main()
{
	string s;

	while (true)
	{
		cin >> s;

		if (cin.eof())
		{
			break;
		}

		cout << s << endl;
	}
}