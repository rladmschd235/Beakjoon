#include <iostream>
#include <queue>
using namespace std;

bool visited[101][101];
int zone[101][101];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int N;

void Reset()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			visited[i][j] = false;
		}
	}
}

void SZC(int x, int y, const int h)
{
	queue<pair<int, int>> q;

	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty())
	{
		int tx = q.front().first;
		int ty = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = tx + dx[i];
			int ny = ty + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			{
				continue;
			}

			if (zone[nx][ny] <= h || visited[nx][ny])
			{
				continue;
			}

			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
}

int main()
{
	int result = 1, H = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> zone[i][j];

			H = max(H, zone[i][j]);
		}
	}

	for (int h = 1; h < H; h++)
	{
		int cnt = 0;

		Reset();
		
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (zone[i][j] > h && !visited[i][j])
				{
					SZC(i, j, h);
					cnt++;
				}
			}
		}

		result = max(cnt, result);
	}

	cout << result;
}