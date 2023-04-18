#include <iostream>
using namespace std;

int main()
{
	int N;
	int F = 0, S = 0, sum = 0, newN = 0, mainN = 0, count = 0;

	cin >> N;
	mainN = N;

	while (true)
	{
		F = N / 10;
		S = N % 10;
		sum = F + S;
		
		if (sum < 10)
		{
			newN = S * 10 + sum;
			count++;
		}
		else if(sum > 9)
		{
			sum = sum % 10;
			newN = S * 10 + sum;
			count++;
		}

		N = newN;

		if (newN == mainN)
		{
			break;
		}
	}

	cout << count;
}