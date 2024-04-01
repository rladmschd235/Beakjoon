#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> vec;
	int n, sum = 0;

	while (true)
	{
		vec.clear();
		sum = 0;
		cin >> n;

		if (n == -1)
		{
			break;
		}

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				vec.push_back(i);
				sum += i;
			}
		}

		if (n == sum)
		{
			cout << n << " = ";

			for (int i = 0; i < vec.size(); i++)
			{
				if (i != vec.size() - 1)
				{
					cout << vec[i] << " + ";
				}
				else
				{
					cout << vec[i] << endl;
				}
			}
		}
		else
		{
			cout << n << " is NOT perfect." << endl;
		}
	}
}