#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	time_t timer = time(NULL);
	struct tm* t;
	t = localtime(&timer);

	string cY, cM, cD;
	
	int currentY = t->tm_year + 1900;
	int currentM = t->tm_mon + 1;
	int currentD = t->tm_mday;

	cY = to_string(currentY);

	if (currentM < 10)
	{
		cM = '0' + to_string(currentM);
	}
	else
	{
		cM = to_string(currentM);
	}
	if (currentD < 10)
	{
		cD = '0' + to_string(currentD);
	}
	else
	{
		cD = to_string(currentD);
	}

	string currentTime = cY + '-' + cM + '-' + cD;

	cout << currentTime;
}