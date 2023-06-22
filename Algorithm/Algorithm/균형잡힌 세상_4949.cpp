#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	stack<char> st;
	bool answer = true;

	while (true)
	{
		answer = true;
		getline(cin, str);

		while (!st.empty())
		{
			st.pop();
		}
		
		if (str == ".")
		{
			break;
		}

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
			{
				st.push('(');
			}
			else if (str[i] == '[')
			{
				st.push('[');
			}
			else if (str[i] == ')')
			{
				if (!st.empty() && st.top() == '(')
				{
					st.pop();
				}
				else
				{
					answer = false;
				}
			}
			else if (str[i] == ']')
			{
				if (!st.empty() && st.top() == '[')
				{
					st.pop();
				}
				else
				{
					answer = false;
				}
			}
			else if (str[i] == '.')
			{
				break;
			}
		}

		if (answer == true && st.empty())
		{
			cout << "yes" << '\n';
		}
		else
		{
			cout << "no" << '\n';
		}
	}
}