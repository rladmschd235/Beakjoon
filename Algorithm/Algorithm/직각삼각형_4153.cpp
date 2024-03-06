#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;

	while (true)
	{
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}

		if (a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}

		if (b > c)
		{
			int temp = c;
			c = b;
			b = temp;
		}

		if (pow(a, 2) + pow(b, 2) == pow(c,2))
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
}