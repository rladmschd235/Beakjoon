#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;

	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		getline(cin, str);
		str += (i + 1) + ". ";
	}
}