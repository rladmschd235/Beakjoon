#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N = 0 , M = 0;
	string bongabbang;
	stack<char> array;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> bongabbang;
		for (int j = 0; j < M; j++)
		{
			array.push(bongabbang[j]);
		}
		for (int k = 0; k < M; k++)
		{
			if (!array.empty())
			{
				cout << array.top();
				array.pop();
			}
		}
		cout << endl;
	}
}