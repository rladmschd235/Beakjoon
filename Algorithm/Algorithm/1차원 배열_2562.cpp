#include <iostream>
using namespace std;

int main()
{
	int lineNum = 0, max = 0;
	int array[9] = {};

	for (int i = 0; i < 9.; i++) {
		cin >> array[i];
		if (max < array[i])
		{
			max = array[i];
			lineNum = i;
		}
	}
	cout << max << endl << lineNum + 1;
}