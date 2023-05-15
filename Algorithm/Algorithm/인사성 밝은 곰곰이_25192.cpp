#include <iostream>
using namespace std;

int main()
{
	int N, sum = 0, useCnt = 0;
	string str;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "ENTER")
		{
			sum += useCnt;
			useCnt = 0;
		}
		else
		{

		}
	}
}