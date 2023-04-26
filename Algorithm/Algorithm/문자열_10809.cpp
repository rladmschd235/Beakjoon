#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;

	int pos[26] = { 0 };
	fill(pos, pos + sizeof(pos) / sizeof(int), -1);

	for (int i = word.size(); i > -1 ; i--)
	{
		pos[(int)word[i] - 97] = i;
	}

	for (int elem : pos)
	{
		cout << elem << " ";
	}

	//double a = 9.5;
	//static_cast<int>(a);

	//cout << a;
}
