#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> book;
	int N, max = 0;
	string bookName, bestBook;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> bookName;
		book[bookName]++;
	}

	for (auto pair : book)
	{
		if (pair.second > max)
		{
			max = pair.second;
			bestBook = pair.first;
		}
	}

	cout << bestBook;
}