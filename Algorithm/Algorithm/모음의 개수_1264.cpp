#include <iostream>
#include <string>
using namespace std;

int main()
{
	string intputStr;
	int count;

	while (true)
	{
		count = 0;

		getline(cin, intputStr);

		if (intputStr == "#")
		{
			break;
		}
		for (int i = 0; i < intputStr.size(); i++)
		{
			if (intputStr[i] == 'a' || intputStr[i] == 'A')
			{
				count++;
			}
			else if (intputStr[i] == 'e' || intputStr[i] == 'E')
			{
				count++;
			}
			else if (intputStr[i] == 'i' || intputStr[i] == 'I')
			{
				count++;
			}
			else if (intputStr[i] == 'o' || intputStr[i] == 'O')
			{
				count++;
			}
			else if (intputStr[i] == 'u' || intputStr[i] == 'U')
			{
				count++;
			}
		}
		cout << count << endl;
	}
}