#include <iostream>
using namespace std;

int main()
{
	int x[3] = { 0 };
	int y[3] = { 0 };

	int x1, y1, idx_x, idx_y;

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < 3; i++)
	{
		bool isRigth = false;

		for (int j = 0; j < 3; j++)
		{
			if (x[i] == x[j] && i != j)
			{
				isRigth = true;
			}
		}

		if (!isRigth)
		{
			idx_x = i;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		bool isRigth = false;

		for (int j = 0; j < 3; j++)
		{
			if (y[i] == y[j] && i != j)
			{
				isRigth = true;
			}
		}

		if (!isRigth)
		{
			idx_y = i;
		}
	}

	cout << x[idx_x] << " " << y[idx_y];
}