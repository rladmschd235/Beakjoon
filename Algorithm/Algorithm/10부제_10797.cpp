#include <iostream>
using namespace std;

int main()
{
	int carNum[5] = { }, dayNum, count = 0;

	cin >> dayNum;

	for (int i = 0; i < 5; i++)
	{
		cin >> carNum[i];
		if (carNum[i] == dayNum)
		{
			count++;
		}
	}

	cout << count;
}