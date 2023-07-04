#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int T, N;
	string input1, input2;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			unordered_map<string, string> unm;
			cin >> input1 >> input2;

			unm[input1] = input2;
			
			
		}
	}
}