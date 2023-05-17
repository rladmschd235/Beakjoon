#include <iostream>
using namespace std;

int main()
{
	int N , M;
	cin >> N >> M;

	int data1[100][100] = { {} };
	int data2[100][100] = { {} };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> data1[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> data2[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << data1[i][j] + data2[i][j] << " ";
		}
		cout << endl;
	}
}