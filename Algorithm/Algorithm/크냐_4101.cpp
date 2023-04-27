#include <iostream>
using namespace std;

int main()
{
	int A, B;

	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
		{
			return 0;
		}
		if (A > B)
		{
			cout << "Yes" << endl;
		}
		else if (A < B || A == B)
		{
			cout << "No" << endl;
		}
	}
}