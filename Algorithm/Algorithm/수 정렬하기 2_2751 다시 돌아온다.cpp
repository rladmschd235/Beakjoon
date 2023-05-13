#include <iostream>
using namespace std;

void insertion_sort(int* array, int N)
{
	int key, j, i;
	for (i = 1; i < N; i++)
	{  // 1
		key = array[i];
		for (j = i - 1; j >= 0 && array[j] > key; j--)
		{  // 2
			array[j + 1] = array[j];
		}
		array[j + 1] = key; //3
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

	insertion_sort(array, N);

	for (int i = 0; i < N; i++)
	{
		cout << array[i] << "\n";
	}
}