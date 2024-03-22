#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> arr;

	arr.resize(3);

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}

		sort(arr.begin(), arr.end());

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
		{
			break;
		}

		if(arr[2] >= arr[0] + arr[1])
		{
			cout << "Invalid" << endl;
		}
		else if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == arr[2])
		{
			cout << "Equilateral" << endl;
		}
		else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
		{
			cout << "Isosceles" << endl;
		}
		else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
		{
			cout << "Scalene" << endl;
		}
		
	}

	return 0;
}