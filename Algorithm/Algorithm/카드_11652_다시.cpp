#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<long long int, int> cards = { };
	int N, max = 0, min = 100001, currentMax = -1;
	long long int cardNum, manyCard, smallCard;
	bool isMax = true;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> cardNum;
		cards[cardNum]++;
	}

	for (auto card : cards)
	{
		if (card.second < min)
		{
			min = card.second;
			smallCard = card.first;
		}
		
		if (card.second > max)
		{
			max = card.second;
			manyCard = card.first;
			currentMax = max;
		}
	}

	if (isMax == true)
	{
		cout << manyCard;
	}
	else
	{
		cout << smallCard;
	}
}