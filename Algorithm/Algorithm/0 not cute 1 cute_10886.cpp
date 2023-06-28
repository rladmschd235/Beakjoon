#include <iostream>
using namespace std;

int main()
{
	int N, input;
	int result[2] = { 0 };

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		if (input == 1)
		{
			result[1]++;
		}
		else
		{
			result[0]++;
		}
	}

	result[0] > result[1] ? cout << "Junhee is not cute!" : cout << "Junhee is cute!";
}