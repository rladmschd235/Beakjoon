#include<iostream>
#include<vector> 
using namespace std;

vector<long long int> arr;
long long int N, K, cnt = 0;

void Bubble_Sort()
{
	for (int i = N; i > 1; i--)
	{
		for (int j = 0; j < i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				long long int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				cnt++;

				if (cnt == K)
				{
					cout << arr[j] << " " << arr[j+1];
					return;
				}
			}
		}
	}

	cout << -1;
}

int main()
{
	cin >> N >> K;
	
	arr.resize(N);

	for (int i = 0; i < N; i++)	
	{
		cin >> arr[i];
	}

	Bubble_Sort();
}