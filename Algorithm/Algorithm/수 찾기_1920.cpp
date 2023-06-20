#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unordered_set<int> uns;
	int N, M, input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		uns.insert(input);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		if (uns.find(input) != uns.end())
		{
			cout << '1' << '\n';
		}
		else 
		{
			cout << '0' << '\n';
		}
	}
}