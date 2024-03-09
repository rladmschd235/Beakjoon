#include <iostream>
using namespace std;

int arr[100][100] = {0};

int main()
{
	int x, y, n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				if (arr[i][j] == 0)
				{
					arr[i][j] = 1;
					cnt++;
				}
			}
		}
	}

	cout << cnt;
}