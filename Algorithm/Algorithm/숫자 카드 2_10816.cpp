#include <iostream>
#include <unordered_map>
using namespace std;

// 해시
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<int, int> cards = {};
	int N, M, input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		cards[input]++;
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		cout << cards[input] << ' ';
	}
}

// 이진 탐색
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	vector<int> answer;
	int N, M, input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	cin >> M;

	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++)
	{
		cin >> input;

		vector<int>::iterator lowIter = lower_bound(v.begin(), v.end(), input);
		vector<int>::iterator uppIter = upper_bound(v.begin(), v.end(), input);
		int upper = uppIter - v.begin();
		int lower = lowIter - v.begin();
		int count = upper - lower; // upper_bound(v.begin(), v.end(), input) - lower_bound(v.begin(), v.end(), input)

		answer.push_back(count); // upper_bound(v.begin(), v.end(), input) - lower_bound(v.begin(), v.end(), input)
	}

	for (auto a : answer)
	{
		cout << a << " ";
	}
}