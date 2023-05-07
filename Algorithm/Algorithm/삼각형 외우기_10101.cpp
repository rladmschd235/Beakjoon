#include <iostream>
using namespace std;

int main()
{
	int deg[3], sum = 0, ECheck = 0;
	bool isCheck = false;

	for (int i = 0; i < 3; i++)
	{
		cin >> deg[i];
		sum += deg[i];
		if (deg[i] == 60)
		{
			ECheck++;
		}
	}

	for (int j = 1; j < 3; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			if (j != k && deg[j] == deg[k])
			{
				isCheck = true;
			}
		}	
	}

	if (sum != 180)
	{
		cout << "Error";
	}
	else if (ECheck == 3)
	{
		cout << "Equilateral";
	}
	else if (sum == 180 && isCheck == true)
	{
		cout << "Isosceles";
	}
	else if (sum == 180)
	{
		cout << "Scalene";
	}
}