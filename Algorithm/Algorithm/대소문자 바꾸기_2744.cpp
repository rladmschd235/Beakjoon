#include <iostream>
using namespace std;

int main()
{
	string str = {};
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + ' ';
		}
		else if (str[i] <= 'z' && str[i] >='a')
		{
			str[i] = str[i] - ' ';
		}
	}
	cout << str;
}