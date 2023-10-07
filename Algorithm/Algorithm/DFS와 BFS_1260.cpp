#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int N, M, V;

void Set(vector<int>& visited)
{
	visited.clear();
	visited.resize(N + 1, 0);
}

void DFS(int v, vector<vector<int>>& maps, vector<int>& visited)
{
	visited[v] = 1;
	cout << v << " ";

	for (int i = 1; i < N+1; i++)
	{
		if (maps[v][i] == 1 && visited[i] == 0)
		{
			DFS(i, maps, visited);
		}
	}
}

void BFS(int v, vector<vector<int>>& maps, vector<int>& visited)
{
	queue<int> q;
	visited[v] = 1;
	q.push(v);
	
	while (!q.empty())
	{
		int n = q.front();
		cout << n << " ";
		q.pop();

		for (int i = 0; i < N+1; i++)
		{
			if (maps[n][i] == 1 && visited[i] == 0)
			{
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main()
{
	vector<vector<int>> maps;
	vector<int> visited;
	int X, Y;
	cin >> N >> M >> V;

	Set(visited);
	maps.resize(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < M; i++)
	{
		cin >> X >> Y;
		maps[X][Y] = 1;
		maps[Y][X] = 1;
	}

	
	DFS(V, maps, visited);
	cout << "\n";
	
	Set(visited);
	BFS(V, maps, visited);
}
