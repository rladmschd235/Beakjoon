#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<long long int, int> cards;
	int N, max = 0, checkMax = 0;
	long long int inputNum, maxKey = 0;
	bool isOutputMin = false;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> inputNum;
		cards[inputNum]++;
	}

	for (auto card : cards)
	{
		if (card.second > max)
		{
			max = card.second;
			maxKey = card.first;
		}
	}

	cout << maxKey;
}