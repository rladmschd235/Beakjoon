#include <iostream>
using namespace std;

int main()
{
	double N;
	double M = 0;
	double sum = 0;
	double input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (M < input)
		{
			M = input;
		}
		sum += input;
	}

	cout.precision(3);
	cout << ((sum / M) * 100) / N;
}