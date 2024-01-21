#include <iostream>
using namespace std;

bool visited[1001];
int board[1001][1001];
int n, m;

void DFS(int u)
{
	visited[u] = true;

	for (int i = 0; i < n+1; i++)
	{
		if (board[u][i] == 1 && !visited[i])
		{
			DFS(i);
		}
	}

	return;
}

int main()
{
	int u, v, result = 0;
	
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> u >> v;
		board[u][v] = 1;
		board[v][u] = 1;
	}

	for (int i = 1; i < n+1; i++)
	{
		if (!visited[i])
		{
			DFS(i);
			result++;
		}
	}

	cout << result;
}