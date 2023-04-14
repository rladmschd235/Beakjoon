#include <iostream>
#include <string>
using namespace std;

int main()
{
	int inputStudentNumber[30] = { 0 };
	int studentNumber[30] = { 0 };

	for (int i = 0; i < 28; i++)
	{
		cin >> inputStudentNumber[i];
	}

	for (int j = 1; j <= 30; j++)
	{
		studentNumber[j - 1] = j;
	}

	for (int k = 0; k < 30; k++)
	{
		for (int y = 0; y < 30; y++)
		{
			if (inputStudentNumber[k] == studentNumber[y])
			{
				studentNumber[y] = 0;
			}
		}
	}

	for (int h = 0; h < 30; h++)
	{
		if (studentNumber[h] != 0)
		{
			cout << studentNumber[h] << endl;
		}
	}
}