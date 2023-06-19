#include <iostream>
#include <unordered_map>
using namespace std;

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