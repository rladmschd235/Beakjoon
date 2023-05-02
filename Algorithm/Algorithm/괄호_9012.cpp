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
		bool correct = true;
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
					correct = false;
					//arr.push(input);
				}
			}
		}
		if (arr.empty()&& correct == true)
		{
			cout << "YES\n";
		}
		else if (!arr.empty() || correct == false)
		{
			cout << "NO\n";
		}
		while (!arr.empty())
		{
			arr.pop();
		}
	}
}