#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int a[26] = { 0 };
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		a[str[i] - 'a']++;
	}

	for (int a1 : a)
	{
		cout << a1 << ' ';
	}
}