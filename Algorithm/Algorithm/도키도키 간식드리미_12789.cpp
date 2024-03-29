#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

stack<int> line1;

string Helper()
{
	stack<int> line2;
 	int cnt = 1;

	while (!line1.empty())
	{
		int x = line1.top();

		if (x == cnt)
		{
			cnt += 1;
			line1.pop();
		}
		else
		{
			line2.push(x);
			line1.pop();
		}

		if (!line2.empty())
		{
			int y = line2.top();

			if (y == cnt)
			{
				int size = line2.size();

				for (int i = 0; i < size; i++)
				{
					if (line2.top() == cnt)
					{
						line2.pop();
						cnt += 1;
					}
					else
					{
						break;
					}
				}
			}
		}
	}

	int size = line2.size();

	for (int i = 0; i < size; i++)
	{
		if (line2.top() == cnt)
		{
			line2.pop();
			cnt += 1;
		}
		else
		{
			break;
		}
	}

	if (line2.empty())
	{
		return "Nice";
	}
	else
	{
		return "Sad";
	}
}

int main()
{
	vector<int> v;
	int N, input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		v.push_back(input);
	}

	for (int i = v.size()-1; i >= 0; i--)
	{
		line1.push(v[i]);
	}

	cout << Helper();
}