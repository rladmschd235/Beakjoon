#include <iostream>
using namespace std;

int main()
{
	int M = 1, F = 1, sum = 0;

	while (true)
	{
		cin >> M >> F;
		if (M == 0 && F == 0)
		{
			break;
		}
		else
		{
			sum = M + F;
			cout << sum << endl;
		}
	}
}