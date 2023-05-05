#include <iostream>
using namespace std;

int main()
{
	int A, B, sum, dif;
	cin >> A >> B;

	if (A < B)
	{
		cout << -1;
		return 0;
	}

	sum = (A + B) / 2;
	dif = (A - B) / 2;

	if (sum + dif != A || sum - dif != B)
	{
		cout << -1;
	}
	else if(sum < 0 || dif < 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum << " " << dif;
	}
}