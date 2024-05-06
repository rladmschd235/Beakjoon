#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
vector<int>	X;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;

		cin >> a;
		A.push_back(a);
	}

	X.push_back(A[0]);

	for (int i = 1; i < N; i++)
	{
		if (X.back() < A[i])
		{
			X.push_back(A[i]);
		}
		else
		{	
			int idx = lower_bound(X.begin(), X.end(), A[i]) - X.begin();
			X[idx] = A[i];
		}
	}

	cout << X.size();
}