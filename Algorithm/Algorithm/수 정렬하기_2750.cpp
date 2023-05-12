#include <iostream>
using namespace std;

void BubbleSort(int* array, int N)
{
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int N;
	cin >> N;
	int* array = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}

	BubbleSort(array, N);

	for (int i = 0; i < N; i++)
	{
		cout << array[i] << "\n";
	}
}