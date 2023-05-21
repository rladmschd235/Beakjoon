#include <iostream>
using namespace std;

int main()
{
	int today[3] = { 0 };
	int d_day[3] = { 0 };

	int year, month, day;
	int monthArr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	string day = "D-";	

	for (int i = 0; i < 3; i++)
	{
		cin >> today[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> d_day[i];
	}

	year = d_day[0] - today[0];
	month = d_day[1] - today[1];
	day = d_day[2] - today[2];

	if (month < 0)
	{

	}

	if (day < 0)
	{

	}
}