#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool MapSort1(const pair<string, int> &left, const pair<string, int>& right)
{
	return left.second > right.second;
}

bool MapSort2(const pair<string, int>& left, const pair<string, int>& right)
{
	return left.first.size() > right.first.size();
}

bool MapSort3(const pair<string, int>& left, const pair<string, int>& right)
{
	return left.first < right.first;
}

bool cmp(pair<string, int>& left, pair<string, int>& right)
{
	if (left.second == right.second)
	{
		if (left.first.length() == right.first.length())
			return left.first < right.first;
		return left.first.length() > right.first.length();
	}
	return left.second > right.second;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<string, int> realWordBoard; // 단어 길이, 사전 순, 나온 횟수

	int N, M;
	string word;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> word;

		if (word.size() >= M)
		{
			realWordBoard[word]++;
		}
	}

	vector<pair<string, int>> wordBoard(realWordBoard.begin(), realWordBoard.end());

	//sort(wordBoard.begin(), wordBoard.end(), MapSort3);
	//sort(wordBoard.begin(), wordBoard.end(), MapSort2);
	//sort(wordBoard.begin(), wordBoard.end(), MapSort1);
	sort(wordBoard.begin(), wordBoard.end(), cmp);

	for (auto w : wordBoard)
	{
		cout << w.first << "\n";
	}
}