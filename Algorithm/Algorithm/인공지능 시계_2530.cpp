#include <iostream>
using namespace std;
 
int main()
{
	int time, min, sec;
	int inputSec;
	int renewalTime, renewalMin = 0, renewalSec = 0;

	cin >> time >> min >> sec >> inputSec;

	sec += inputSec;

	if (sec >= 60)
	{
		renewalMin = sec / 60;
		renewalSec = sec % 60;
		min += renewalMin;
		sec = 0;
		sec += renewalSec;
	}
	
	if (min >= 60)
	{
		renewalTime = min / 60;
		renewalMin = min % 60;
		time += renewalTime;
		min = 0;
		min += renewalMin;
	}

	if (time >= 24)
	{
		time = time % 24;
	}

	cout << time << " " << min << " " << sec;
}