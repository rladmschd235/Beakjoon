#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int max = -1, verticalMax, horizontalMax;
	int array[9][9];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> array[i][j];
			if (array[i][j] > max)
			{
				max = array[i][j];
				verticalMax = i+1;
				horizontalMax = j+1;
			}
		}
	}

	cout << max << endl << verticalMax << " " << horizontalMax;
}