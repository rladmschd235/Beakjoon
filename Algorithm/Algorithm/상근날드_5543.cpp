#include <iostream>
using namespace std;

int main()
{
	int SD, JD, HD, cola, soda, buger, drink;
	cin >> SD >> JD >> HD >> cola >> soda;

	if (SD <= JD && SD <= HD)
	{
		buger = SD;
	}
	else if(JD <= SD && JD <= HD)
	{
		buger = JD;
	}
	else if(HD <= SD && HD <= JD)
	{
		buger = HD;
	}

	soda < cola ? drink = soda : drink = cola;

	cout << buger + drink - 50;
}