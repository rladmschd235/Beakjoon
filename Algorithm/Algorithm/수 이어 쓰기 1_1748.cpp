#include <iostream>
using namespace std;

int main()
{
	int n, r = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i *= 10)
	{
		r += n - i + 1;
	}
	
	cout << r;
}