#include <iostream>
using namespace std;

int main()
{
	int N1;
	int N2 = 0;
	int S;
	string str;

	cin >> N1;
	N2 = N1;

	if (N1 > 10)
	{
		N1 = 10;
	}

	for (int i = 0; i < N2; i++)
	{
		cin >> str;

		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] < 'a')
			{
				str[j] += 32;
			}
		}
		cout << str << endl;
	}
}