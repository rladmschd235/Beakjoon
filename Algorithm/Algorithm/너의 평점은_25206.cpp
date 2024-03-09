#include <iostream>
#include <string>
using namespace std;

float ChageScore(string rating)
{
	if (rating == "A+")
	{
		return 4.5;
	}
	else if (rating == "A0")
	{
		return 4.0;
	}
	else if (rating == "B+")
	{
		return 3.5;
	}
	else if (rating == "B0")
	{
		return 3.0;
	}
	else if (rating == "C+")
	{
		return 2.5;
	}
	else if (rating == "C0")
	{
		return 2.0;
	}
	else if (rating == "D+")
	{
		return 1.5;
	}
	else if (rating == "D0")
	{
		return 1.0;
	}
	else if (rating == "F")
	{
		return 0.0;
	}
}

int main()
{
	string name, rating;
	float score;
	float sum1 = 0, sum2 = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> name >> score >> rating;

		if (rating != "P")
		{
			sum1 += (score * ChageScore(rating));
			sum2 += score;
		}
	}

	cout << fixed;
	cout.precision(6);
	cout << sum1 / sum2;
}