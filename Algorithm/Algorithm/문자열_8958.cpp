#include <iostream>
using namespace std;

int main()
{
	int N, count = 0, sum = 0;
	string array;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> array;
		sum = 0;
		count = 0;
		for (int j = 0; j < array.size(); j++) {
			if (array[j] == 'O')
			{
				count++;
				sum += count;
			}
			else
			{
				count = 0;
			}
		}
		cout << sum << endl;
	}
}