#include <iostream>
using namespace std;

int BC(int n, int k) // n�� �� k�� ����
{
	if (k == 0 || k == n)
	{
		return 1;
	}
	return BC(n - 1, k) + BC(n - 1, k - 1);
}

int main()
{
	int n, k;

	cin >> n >> k;

	cout << BC(n, k);
}