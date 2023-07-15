#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<string, int> userLog;
	string inputName1, inputName2;
	int danceCount = 1, N;

	cin >> N;

	userLog["ChongChong"] = true;

	for (int i = 0; i < N; i++)
	{
		cin >> inputName1 >> inputName2;

		if (userLog.find(inputName1) != userLog.end())
		{
			if (userLog.find(inputName2) == userLog.end())
			{
				userLog[inputName2]++;
				danceCount++;
			}
		}
		else if (userLog.find(inputName2) != userLog.end())
		{
			if (userLog.find(inputName1) == userLog.end())
			{
				userLog[inputName1]++;
				danceCount++;
			}
		}
	}

	cout << danceCount;
}