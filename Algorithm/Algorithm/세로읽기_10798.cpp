#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	char array[5][15] = { { 0 } };

	for (int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (array[j][i] == NULL)
			{
				continue;
			}
			else
			{
				cout << array[j][i];
			}
		}
	}
}