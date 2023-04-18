#include <iostream>
using namespace std;

int main()
{
	int N, square = 0, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> N;
		square = N * N;
		sum += square;
	}

	sum = sum % 10;

	cout << sum;
}