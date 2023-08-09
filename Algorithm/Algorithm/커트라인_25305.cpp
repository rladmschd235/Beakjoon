#include<iostream>
using namespace std;

int main()
{
	int tester[1000] = { 0 };
	int sum = 0, special = 0;

	cin >> sum >> special;

	for (int i = 0; i < sum; i++)
	{
		cin >> tester[i];
	}

	for (int i = 0; i < sum; i++)
	{
		for (int j = 1; j < sum - i; j++)
		{
			if (tester[j] > tester[j - 1])
			{
				int temp = tester[j];
				tester[j] = tester[j - 1];
				tester[j - 1] = temp;
			}
		}
	}
	
	cout << tester[special - 1];
}