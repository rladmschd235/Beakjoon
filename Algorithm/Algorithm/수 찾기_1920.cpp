#include <iostream>
#include<unordered_set>
using namespace std;

//해시
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unordered_set<int> uns;
	int N, M, input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		uns.insert(input);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		if (uns.find(input) != uns.end())
		{
			cout << '1' << '\n';
		}
		else 
		{
			cout << '0' << '\n';
		}
	}
}

// 이진 탐색
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
vector<int> R;

void Search(int input)
{
	int left = 0;
	int right = A.size() - 1;
	int	mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (input == A[mid])
		{
			R.push_back(1);
			return;
		}
		else if (input > A[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	R.push_back(0);
	return;
}

int main()
{
	int N, M, input;

	cin >> N;

	A.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		A.push_back(input);
	}

	sort(A.begin(), A.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input;
		Search(input);
	}

	for (auto r : R)
	{
		cout << r << "\n";
	}
}