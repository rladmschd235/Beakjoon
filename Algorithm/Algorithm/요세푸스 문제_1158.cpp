#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int N, K, count = 0;
	cin >> N >> K;

	queue<int> q;
	stack<int> s;

	for (int i = 0; i < N; i++)
	{
		q.push(i + 1);
	}

	cout << "<";

	while (!q.empty())
	{
		if (count == K - 1)
		{
			count = 0;
			s.push(q.front());
			cout << s.top();
			if (s.size() < N)
				cout << ", ";
			q.pop();
		}
		else
		{
			count++;
			q.push(q.front());
			q.pop();
		}
	}

	cout << ">";
}
