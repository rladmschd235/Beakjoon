#include<iostream>
using namespace std;

int main()
{
	int N, n, cnt = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> n;

		bool isNotRigth = false;

		for (int j = 2; j < n; j++)
		{
			if (n % j == 0)
			{
				isNotRigth = true;
				break;
			}
		}

		if (!isNotRigth && n != 1)
		{
			cnt++;
		}
	}

	cout << cnt;
}