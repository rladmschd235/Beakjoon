#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> stick;
	int N, length;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> length;
		stick.push(length);
	}

	int result = 1, right = stick.top();

	while (!stick.empty())
	{
		if (stick.top() > right)
		{
			right = stick.top();
			result++;
		}
		stick.pop();
	}

	cout << result;
}