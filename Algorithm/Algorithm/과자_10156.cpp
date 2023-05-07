#include <iostream>
using namespace std;

int main()
{
	int K, N, M;

	cin >> K >> N >> M;

	if (K * N > M)
	{
		cout << (K * N) - M;
	}
	else if (K * N <= M)
	{
		cout << 0;
	}
}