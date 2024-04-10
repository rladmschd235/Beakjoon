#include <iostream>
#include <queue>
using namespace std;

bool visited[100][100];
char map[100][100];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int N;

void Reset()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			visited[i][j] = false;
		}
	}
}

void NormalSearch(const int x, const int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;

	while (!q.empty())
	{
		int fx = q.front().first;
		int fy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = fx + dx[i];
			int ny = fy + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			{
				continue;
			}

			if (!visited[nx][ny] && map[nx][ny] == map[fx][fy])
			{
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
}

void ColorBlindSearch(const int x, const int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;

	while (!q.empty())
	{
		int fx = q.front().first;
		int fy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = fx + dx[i];
			int ny = fy + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			{
				continue;
			}

			if (map[fx][fy] == 'B')
			{
				if (!visited[nx][ny] && map[nx][ny] == 'B')
				{
					visited[nx][ny] = true;
					q.push({ nx, ny });
				}
			}
			else
			{
				if (!visited[nx][ny] && (map[nx][ny] == 'R' || map[nx][ny] == 'G'))
				{
					visited[nx][ny] = true;
					q.push({ nx, ny });
				}
			}
		}
	}
}

int main()
{
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j])
			{
				NormalSearch(i, j);
				result++;
			}
		}
	}

	cout << result << " ";

	Reset();
	result = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j])
			{
				ColorBlindSearch(i, j);
				result++;
			}
		}
	}

	cout << result << " ";
}