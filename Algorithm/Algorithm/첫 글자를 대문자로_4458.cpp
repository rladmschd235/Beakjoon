#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;
	
	cin >> N;
	cin.ignore();

	for (int i = 1; i <= N; i++)
	{
		getline(cin, str);
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= ' ';
			cout << str << "\n";
		}
		else if(str[0] >= 'A' && str[0] <= 'Z')
		{
			cout << str << "\n";
		}	
	}
}