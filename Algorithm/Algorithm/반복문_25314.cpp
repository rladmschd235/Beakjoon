#include <iostream>
using namespace std;

int main()
{
	int N, byte = 0;
	cin >> N;

	byte = N / 4;

	for (int i = 0; i < byte; i++) {
		cout << "long ";
	}

	cout << "int";
}