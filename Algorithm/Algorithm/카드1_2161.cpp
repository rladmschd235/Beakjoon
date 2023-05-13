#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	queue<int> cade;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cade.push(i + 1);
	}

	while (cade.size() != 1)
	{
		cout << cade.front() << " ";
		cade.pop();
		cade.push(cade.front());
		cade.pop();
	}
	cout << cade.front();
}
