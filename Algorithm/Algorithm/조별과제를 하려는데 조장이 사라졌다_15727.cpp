#include <iostream>
using namespace std;

int main()
{
	int L;
	float result1, result2;

	cin >> L;

	result1 = L / 5;
	result2 = L % 5;

	if (result2 > 0)
	{
		cout << result1 + 1;
	}
	else
	{
		cout << result1;
	}
}