#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	int r;
	while (a % b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}

int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	
	int result1 = GCD(a, b), result2 = LCM(a, b);

	cout << result1 << endl << result2;
}