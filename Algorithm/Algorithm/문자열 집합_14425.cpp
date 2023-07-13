#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
	unordered_set<string> s1;

	string input;
	int N, M, result = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		s1.insert(input);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		if (s1.find(input) != s1.end())
		{
			result++;
		}
	}

	cout << result;
}