#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D, E, sec = 0;

	cin >> A >> B >> C >> D >> E;

	if (A < 0)
	{
		sec += C * (-A);
		A = 0;
	}

	if (A == 0)
	{
		sec += D;
	}

	A = B - A;

	sec += E * A;

	cout << sec;
}