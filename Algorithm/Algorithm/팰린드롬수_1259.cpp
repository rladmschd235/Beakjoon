#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		bool isNotPalindrome = false;
		string str;
		cin >> str;

		if (str == "0")
		{
			break;
		}

		int len = str.size();
		int max = str.size() / 2;
		
		for (int i = 0; i < max; i++)
		{
			if (str[i] != str[(len-1) - i])
			{
				isNotPalindrome = true;
			}
		}

		if (isNotPalindrome)
		{
			cout << "no" << endl;
		}
		else
		{
			cout << "yes" << endl;
		}
	}
}