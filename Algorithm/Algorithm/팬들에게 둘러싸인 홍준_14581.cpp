#include <iostream>
using namespace std;

int main()
{
	string str;
	string com = ":";
	string fan = ":fan:";
	int count = 0;

	cin >> str;

	for (int i = 0; i < 9; i++)
	{
		count++;
		if (i == 4)
		{
			cout << ":" << str << ":";
		}
		else
		{
			cout << fan;
		}
		if (count == 3)
		{
			count = 0;
			cout << endl;
		}
	}
}