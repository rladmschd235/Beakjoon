#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	string str;
	int testCast, count = 0;

	cin >> testCast;

	for (int i = 0; i < testCast; i++)
	{
		unordered_map<char, int> unm;
		bool isNot = false;
		char check = ' ';
		
		cin >> str;

		for (int j = 0; j < str.size(); j++)
		{
			if (check != str[j] && unm.find(str[j]) == unm.end())	
			{
				// 전에 넣어준거랑 같지 않거나, 밸류가 존재 하지 않는다면
				unm[str[j]]++;
			}
			else if (check == str[j])
			{
				unm[str[j]]++;
			}
			else
			{
				isNot = true;
				break;
			}

			check = str[j];
		}

		if (isNot == false)
		{
			count++;
		}
	}

	cout << count;
}