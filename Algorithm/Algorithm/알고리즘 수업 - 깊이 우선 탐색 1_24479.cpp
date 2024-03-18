#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> grahp;
vector<int> visited;

int cnt = 1;

void DFS(int r)
{
	visited[r] = cnt++;

	for (int i = 0; i < grahp[r].size(); i++)
	{
		int v = grahp[r][i];	

		if (visited[v] == 0)
		{
			DFS(v);
		}
	}
}

int main()
{
	int N, M, R, cnt = 1;

	cin >> N >> M >> R;

	grahp.resize(N+1);
	visited.resize(N+1);

	int u, v;

	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;

		grahp[u].push_back(v);
		grahp[v].push_back(u);
	}

	for (int i = 1; i < N+1; i++)
	{
		sort(grahp[i].begin(), grahp[i].end());
	}

	DFS(R);

	for (int i = 1; i < N+1; i++)
	{
		cout << visited[i] << "\n";
	}
}