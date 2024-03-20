#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;
int N, M, R, cnt = 1;

void BFS(int r)
{
	queue<int> q;
	q.push(r);
	visited[r] = cnt++;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];

			if (visited[y] == 0)
			{
				q.push(y);
				visited[y] = cnt++;
			}
		}
	}
}

int main()
{
	int u, v;

	cin >> N >> M >> R;

	graph.resize(N+1);
	visited.resize(N+1);

	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i < N + 1; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	BFS(R);

	for (int i = 1; i < visited.size(); i++)
	{
		cout << visited[i] << "\n";
	}
}