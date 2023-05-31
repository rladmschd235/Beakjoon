#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int countK, countM, N, K;

void front(stack<int> &s, deque<int> &d)
{
	while (countK <= K - 1)
	{
		countK++;
		d.push_back(d.front());
		d.pop_front();
		if (countK == K - 1)
		{
			countK = 0;
			s.push(d.front());
			cout << s.top() << endl;
			d.pop_front();
			countM++;
			break;
		}
	}
}

void back(stack<int> &s, deque<int> &d)
{
	while (countK <= K - 1)
	{
		countK++;
		d.push_front(d.back());
		d.pop_back();
		if (countK == K - 1)
		{
			countK = 0;
			s.push(d.back());
			cout << s.top() << endl;
			d.pop_back();
			countM++;
			break;
		}
	}
	
}

int main()
{
	int N, K, M;
	bool isReverse = false;
	cin >> N >> K >> M;

	deque<int> d;
	stack<int> s;

	for (int i = 0; i < N; i++)
	{
		d.push_back(i + 1);
	}

	countM = 0;

	while (!d.empty())
	{
		if (countM == M)
		{
			countM = 0;
			if (isReverse == true)
			{
				isReverse = false;
			}
			else
			{
				isReverse = true;
			}
		}

		if (isReverse == false)
		{
			front(s, d);
		}
		else
		{
			back(s, d);
		}
	}
}