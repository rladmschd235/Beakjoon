#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}

		for (int j = 0; j < (N * 2) - ((i+1) * 2); j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N-i; j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < N-i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
}