#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> cade;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cade.push(i + 1);
	}

	while (cade.size() != 1)
	{
		cade.pop();
		cade.push(cade.front());
		cade.pop();
	}

	cout << cade.front();
}
