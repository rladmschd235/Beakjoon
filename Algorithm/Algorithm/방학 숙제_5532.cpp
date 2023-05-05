#include <iostream>
using namespace std;

int main()
{
	int L, A, B, C, D;
	int d1, d2;

	cin >> L >> A >> B >> C >> D;

	if (A % C != 0)
	{
		d1 = A / C + 1;
	}
	else
	{
		d1 = A / C;
	}
	
	if (B % D != 0)
	{
		d2 = B / D + 1;
	}
	else
	{
		d2 = B / D;
	}

	d1 > d2 ? cout << L- d1 : cout << L - d2;
}