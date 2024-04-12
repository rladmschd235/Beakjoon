#include <iostream>
#include <queue>
using namespace std;

bool visited[50][50];
int map[50][50];

int dx[] = { -1,1,0,0,1,-1,1,-1 };
int dy[] = { 0,0,-1,1,1,-1,-1,1 };
int w, h;

void Reset()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			visited[i][j] = false;
		}
	}
}

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;

	while (!q.empty())
	{
		int fx = q.front().first;
		int fy = q.front().second;

		q.pop();

		for (int i = 0; i < 8; i++)
		{
			int nx = fx + dx[i];
			int ny = fy + dy[i];

			if (nx < 0 || ny < 0 || nx >= h || ny >= w)
			{
				continue;
			}

			if (!visited[nx][ny] && map[nx][ny] == 1)
			{
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
}

int main()
{
	while (true)
	{
		
		int result = 0;

		cin >> w >> h;

		if (w == 0 && h == 0)
		{
			break;
		}

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (!visited[i][j] && map[i][j] == 1)
				{
					result++;
					BFS(i, j);
				}
			}
		}

		cout << result << "\n";

		Reset();
	}
}