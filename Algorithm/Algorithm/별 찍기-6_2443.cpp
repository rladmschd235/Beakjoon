#include <iostream>
using namespace std;

int main()
{
	int N, count = 0; 

	cin >> N;

	for (int i = N; i > 0; i--)
	{
		for (int j = 0; j < count; j++)
		{
				cout << " ";
		}
		for (int j = 2 * i - 1; j > 0; j--)
		{
			cout << "*";
		}
		count++;
		cout << "\n";
	}
}