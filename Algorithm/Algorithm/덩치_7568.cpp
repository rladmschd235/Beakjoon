#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int N, k = 0;
	int arr[50][2] = { {} };

	cin >> N;

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			cin >> arr[x][y];
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		int p = arr[i][0];
		int q = arr[i][1];

		for (int j = 0; j < N; j++)
		{
			if (p < arr[j][0] && q < arr[j][1])
			{
				k++;
			}
		}
		cout << k + 1 << " ";
		k = 0;
	}
}