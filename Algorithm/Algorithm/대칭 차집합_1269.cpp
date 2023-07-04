#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M, input, result = 0;
	unordered_set<int> A;
	unordered_set<int> B;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		A.insert(input);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		B.insert(input);
	}
	
	for (auto b : B)
	{
		if (A.find(b) == A.end())
		{
			result++;
		}
	}

	for (auto a: A)
	{
		if (B.find(a) == B.end())
		{
			result++;
		}
	}

	cout << result;
}