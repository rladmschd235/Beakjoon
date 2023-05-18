#include <iostream>
using namespace std;

int main()
{
	int N, max = 0, sum = 0;
	int nun[3] = {};

	cin >> N;

	for (int i = 0; i < 3; i++)
	{
		cin >> nun[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (nun[1] == nun[2] == nun[3])
		{
			sum = 10000 + (nun[1] * 1000);
		}
		else if (nun[1] == nun[2] || nun[2] == nun[3] || nun[1] == nun[3])
		{
			sum = 
		}
	}
}