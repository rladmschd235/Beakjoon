#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(char& left, char& right)
{
	if (left == right)
	{
		return false;
	}
	return left > right;
}

int main()
{
	string num;

	cin >> num;

	sort(num.begin(), num.end(), cmp);

	cout << num;
}