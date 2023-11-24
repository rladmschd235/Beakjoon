#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

// left < right: 오름차순, left > right: 내림차순
bool cmp(string& left, string& right)
{
	if (left.length() == right.length())
	{
		return left < right;
	}
	return left.length() < right.length();
}

int main()
{
	set<string> realWordBoard;
	string word;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> word;
		realWordBoard.insert(word);
	}

	vector<string> wordBoard(realWordBoard.begin(), realWordBoard.end());
	sort(wordBoard.begin(), wordBoard.end(), cmp);

	for (auto w : wordBoard)
	{
		cout << w << "\n";
	}
}