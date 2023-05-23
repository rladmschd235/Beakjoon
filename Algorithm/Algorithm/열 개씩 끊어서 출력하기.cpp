#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		count++;
		if (count == 10)
		{
			cout << str[i] << endl;
			count = 0;
		}
		else
		{
			cout << str[i];
		}
	}
}