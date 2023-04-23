#include <iostream>
using namespace std;

int main()
{
	long long N, M, difference;
	cin >> N >> M;

	difference = N - M;

	if (difference < 0)
	{
		difference *= -1;
	}
	
	cout << difference;
}