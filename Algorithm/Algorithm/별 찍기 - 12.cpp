#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int starCnt = 0, sCnt = N-1;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = N-1; j > i; j--)
		{
			cout << ' ';
		}
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}
		cout << "\n";
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << ' ';
		}
		for (int j = N-1; j > i; j--)
		{
			cout << '*';
		}
		cout << "\n";
	}
}