#include <iostream>
using namespace std;

int main()
{
	int N, cnt = 2;

	cin >> N;

	while (true)
	{
		if (N == 1)
		{
			break;
		}

		if (N % cnt == 0)
		{
			cout << cnt << "\n";
			N /= cnt;
			cnt = 2;
			continue;
		}

		cnt++;
	}
}