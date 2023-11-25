#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
	string word;

	cin >> word;

	int mid = word.size() / 2;
	string check = word.substr(0, mid);

	word.erase(0, mid);
	reverse(word.begin(), word.end());

	if (word.find(check) != string::npos)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}