#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i < 2 * N + 1; i++)
	{
		if (i <= N)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
		}
		else if(i > N)
		{
			for (int h = N*2; h > i; h--)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}