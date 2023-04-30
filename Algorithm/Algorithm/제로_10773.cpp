#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> money;
	int N, sayMoney, sumMoney = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> sayMoney;
		if (sayMoney > 0)
		{
			money.push(sayMoney);
		}
		else if (sayMoney == 0)
		{
			money.pop();
		}
	}

	while (!money.empty())
	{
		sumMoney += money.top();
		money.pop();
	}

	cout << sumMoney;
}