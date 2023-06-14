#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, input;
	int array[10001] = {};

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		array[input]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		while (array[i] != 0)
		{
			cout << i << '\n';
			array[i]--;
		}
	}
}