#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string croa[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int count = 0;

	cin >> str;

	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			if (str.find(croa[i]) != string::npos)
			{
				str.replace(str.find(croa[i]), croa[i].size(), "*");
				count++;
			}
			else
			{
				break;
			}
		}
	}	

	std::cout << str.size();
}