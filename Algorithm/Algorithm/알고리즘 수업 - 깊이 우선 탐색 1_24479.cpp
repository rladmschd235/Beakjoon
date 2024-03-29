#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;

int cnt = 1;

void DFS(int r)
{
	visited[r] = cnt++;

	for (int i = 0; i < graph[r].size(); i++)
	{
		int v = graph[r][i];	

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

	graph.resize(N+1);
	visited.resize(N+1);

	int u, v;

	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i < N+1; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(R);

	for (int i = 1; i < N+1; i++)
	{
		cout << visited[i] << "\n";
	}
}