#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> Alist;
	vector<int> Blist;
	int T, N, M, A, B, count;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		Alist.clear();
		Blist.clear();
		count = 0;

		cin >> N >> M;

		for (int j = 0; j < N; j++)
		{
			cin >> A;
			Alist.push_back(A);
		}

		for (int j = 0; j < M; j++)
		{
			cin >> B;
			Blist.push_back(B);
		}

		sort(Blist.begin(), Blist.end());

		for (auto a : Alist)
		{
			count += lower_bound(Blist.begin(), Blist.end(), a) - Blist.begin();
		}

		cout << count << "\n";
	}
}