#include <iostream>
using namespace std;

int main()
{
	int total, input, sum = 0;

	cin >> total;

	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		sum += input;
	}

	cout << total - sum;
}