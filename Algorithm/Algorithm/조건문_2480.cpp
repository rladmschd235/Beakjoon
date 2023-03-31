#include <iostream>
using namespace std;

int main() {
	int first, second, third;
	int max = 0;
	cin >> first >> second >> third;

	if (first == second && second == third && third == first) 
	{
		cout << 10000 + first * 1000;
	}
	else if(first == second || second == third)
	{
		cout << 1000 + second * 100;
	}
	else if (first == third)
	{
		cout << 1000 + first * 100;
	}
	else if(first != second && second != third && third != first)
	{
		if (first > second && first > third)
		{
			max = first;
		}
		if (second > first && second > third)
		{
			max = second;
		}
		if (third > first && third > second)
		{
			max = third;
		}

		cout << max * 100;
	}
}