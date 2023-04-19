#include <iostream>
using namespace std;

int main()
{
	int A, B, C, multiply, result = 0;
	int array[10] = { 0 };

	cin >> A >> B >> C;

	multiply = A * B * C;

	while (true)
	{
		if (multiply >= 1)
		{
			result = multiply % 10;

			array[result] += 1;

			multiply = multiply / 10;
		}
		else if(multiply < 1)
		{
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}