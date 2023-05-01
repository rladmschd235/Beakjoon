#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int input = 0;
	int number;
	string str;
	stack<int> arr;

	cin >> number;

	for (int i = 0; i < number; i++)
	{
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '(')
			{
				arr.push(input);
			}
			else if (str[j] == ')')
			{
				if (!arr.empty())
				{
					arr.pop();
					continue;
				}
				else
				{
					arr.push(input);
				}
			}
		}
		if (arr.empty())
		{
			cout << "YES\n";
		}
		else if (!arr.empty())
		{
			cout << "NO\n";
		}
		while (!arr.empty())
		{
			arr.pop();
		}
	}
}