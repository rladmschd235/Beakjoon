#include <iostream>
using namespace std;

int main()
{
	int N, count1, count2;

	cin >> N;

	count1 = N;
	count2 = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j < count1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			cout << "*";
		}
		count1--;
		cout << "\n";
	}

	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < count2 + 1; j++)
		{
			cout << " ";
		}
		for (int j = 2 * i - 1; j > 0; j--)
		{
			cout << "*";
		}
		count2++;
		cout << "\n";
	}
}