#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	while (true)
	{
		getline(cin, str);

		if (str == "END")
		{
			break;
		}
		else
		{
			for (int i = str.size()-1; i >= 0; i--)
			{
				cout << str[i];
			}
		}
		cout << "\n";
	}

}