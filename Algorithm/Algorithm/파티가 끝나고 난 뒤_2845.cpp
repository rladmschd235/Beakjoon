#include <iostream>
using namespace std;

int main()
{
	int L, P;
	int num[5] = { 0 };
	int differenceNum[5] = { 0 };

	cin >> L >> P;

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];

		if (num[i] != L * P)
		{
			differenceNum[i] = num[i] - L * P;
		}
	}
	
	for (int j = 0; j < 5; j++)
	{
		cout << differenceNum[j] << " ";
	}
}