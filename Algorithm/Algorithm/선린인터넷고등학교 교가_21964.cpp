#include <iostream>
#include <string>
using namespace std;

char c[100000] = {};

int main()
{
	int N;
	
	cin >> N;

	for (int i = N-1; i >= 0; i--)
	{
		cin >> c[i];
	}

	cout << c[4] << c[3] << c[2] << c[1] << c[0];
}