#include <iostream>
#include <queue>
using namespace std;

int visited[1000][1000];
int map[1000][1000];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int n, m;

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = 0;

	while (!q.empty())
	{
		int tx = q.front().first;
		int ty = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = tx + dx[i];
			int ny = ty + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
			{
				continue;
			}

			if (map[nx][ny] == 1 && !visited[nx][ny])
			{
				q.push({ nx, ny });
				visited[nx][ny] = visited[tx][ty] + 1;
			}
		}
	}
}

int main()
{
	int tx = 0, ty = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == 2)
			{
				tx = i;
				ty = j;
			}
		}
	}

	BFS(tx, ty);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j] && map[i][j] == 1)
			{
				visited[i][j] = -1;
			}

			cout << visited[i][j] << " ";
		}
		cout << "\n";
	}
}