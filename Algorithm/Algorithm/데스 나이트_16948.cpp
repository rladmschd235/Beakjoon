#include <iostream>
#include <queue>
using namespace std;

int board[201][201];
int visited[201][201];

int dx[6] = { -2,-2,0,0,2,2 };
int dy[6] = { -1,1,-2,2,-1,1 };

int N;

void Reset()
{
	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < 201; j++)
		{
			visited[i][j] = -1;
		}
	}
}

void BFS(int x, int y)
{
	queue<pair<int, int>> q; 
	q.push({ x,y });
	visited[x][y] = 0;

	while (!q.empty())
	{
		int fx = q.front().first;
		int fy = q.front().second;

		q.pop();

		for (int i = 0; i < 6; i++)
		{
			int nx = fx + dx[i];
			int ny = fy + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			{
				continue;
			}

			if (visited[nx][ny] == -1)
			{
				visited[nx][ny] = visited[fx][fy] + 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main()
{
	int cx, cy, tx, ty;

	cin >> N;

	cin >> cx >> cy >> tx >> ty;

	Reset();

	BFS(cx, cy);

	cout << visited[tx][ty];
}