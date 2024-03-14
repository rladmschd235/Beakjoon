	#include <iostream>
	using namespace std;

	int main()
	{
		int result = 0;
		int min = 10001;
		int m, n;

		cin >> m >> n;

		for (int i = m; i < n+1; i++)
		{
			bool isNotPrime = false;
		
			if (i == 1)
			{
				continue;
			}

			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					isNotPrime = true;
				}
			}

			if (!isNotPrime)
			{
				result += i;

				if (i < min)
				{
					min = i;
				}
			}
		}

		if (result == 0)
		{
			cout << -1;
		}
		else
		{
			cout << result << endl << min;
		}
	}