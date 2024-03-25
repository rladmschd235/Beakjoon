#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;
int N, M, R, cnt = 1;

bool cmp(int a, int b)
{
	return a > b; // true: ¾È ¹Ù²Þ, false: ¹Ù²Þ
}

void DFS(int r)
{
	visited[r] = cnt++;

	for (int i = 0; i < graph[r].size(); i++)
	{
		int x = graph[r][i];

		if (visited[x] == 0)
		{
			DFS(x);
		}
	}
}

int main()
{
	int u, v;

	cin >> N >> M >> R;

	graph.resize(N + 1);
	visited.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i < N + 1; i++)
	{
		sort(graph[i].begin(), graph[i].end(), cmp);
	}

	DFS(R);

	for (int i = 1; i < visited.size(); i++)
	{
		cout << visited[i] << "\n";
	}
}