#include <iostream>
using namespace std;

int main()
{
	int N, count = 0, currentCount;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			count += 5;
		}
		else if (i == 1)
		{
			count += 7;
			currentCount = 7;
		}
		else
		{
			count += currentCount + 3;
			currentCount += 3;
		}
	}
	
	cout << count % 45678;
}