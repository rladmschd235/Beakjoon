#include <iostream>
#include <queue>
using namespace std;

bool visited[101][101];
char field[101][101];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int H, W, cnt = 0;

void reset()
{
	cnt = 0;

	for (int i = 0; i < 101; i++) 
	{
		for (int j = 0; j < 101; j++)
		{
			visited[i][j] = false;
			field[i][j] = ' ';
		}
	}
}

void SheepCheck(int x, int y)
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

			if (ny < 0 || nx < 0 || nx >= H || ny >= W)	
			{
				continue;
			}

			if (!visited[nx][ny] && field[nx][ny] == '#')
			{
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
}

int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W;

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				cin >> field[i][j];
			}
		}

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				if (!visited[i][j] && field[i][j] == '#')
				{
					SheepCheck(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";

		reset();
	}
}