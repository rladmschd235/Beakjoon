#include <iostream>
using namespace std;

int main()
{
	string str;
	int array[26] = { 0 };
	int maxIndex, max = -1, count = 0;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + ' ';
		}
	}

	for (int i = 0; i < str.size(); i++)
	{
		array[str[i] - 97] += 1;
	}

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		if (max < array[i])
		{
			maxIndex = i;
			max = array[i];
		}
	}

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		if (max == array[i])
		{
			count++;
		}
	}

	if (count < 2)
	{
		int manyWord = maxIndex + 65;
		cout << (char)manyWord;
	}
	else
	{
		cout << "?";
	}
}