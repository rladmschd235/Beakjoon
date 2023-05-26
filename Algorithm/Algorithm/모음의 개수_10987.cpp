#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			count++;
		}
	}

	cout << count;
}