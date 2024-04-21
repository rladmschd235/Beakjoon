#include <iostream>
using namespace std;

int main()
{
	string mbti, input;
	int num, cnt = 0;

	cin >> mbti >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> input;

		if (mbti == input)
		{
			cnt++;
		}
	}
	
	cout << cnt;
}
