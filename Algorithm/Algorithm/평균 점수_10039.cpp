#include <iostream>
using namespace std;

int main()
{
	int score, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> score;
		if (score <= 40)
		{
			score = 40;
			sum += score;
		}
		else
		{
			sum += score;
		}
	}

	cout << sum / 5;
}