#include <iostream>
using namespace std;

int main()
{
	int N, A, B, cola, beer;

	cin >> N >> A >> B;

	cola = A / 2;
	beer = B / 1;

	if (N > cola + beer)
	{
		cout << cola + beer;
	}
	else if (N < cola + beer)
	{
		cout << N;
	}
}