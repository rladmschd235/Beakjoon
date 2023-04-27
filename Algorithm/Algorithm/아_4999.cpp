#include <iostream>
using namespace std;

int main()
{
	string input;
	string needInput;

	cin >> input >> needInput;

	if (input.size() < needInput.size())
	{
		cout << "no";
	}
	else if (input.size() >= needInput.size())
	{
		cout << "go";
	}
}