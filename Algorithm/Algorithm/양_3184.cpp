#include <iostream>
#include <queue>
using namespace std;

bool visited[250][250];
char field[250][250];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int v = 0, o = 0, R, C;

void BFS(int x, int y, char c)
{
	int nv = 0, no = 0;

	if (c == 'v')
	{
		nv++;
	}
	else
	{
		no++;
	}

	queue<pair<int, int>> q;
	q.push({ x, y });
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

			// 구분 기준
			if (nx < 0 || ny < 0 || nx >= R || ny >= C)
			{
				continue;
			}
			if (field[nx][ny] == '#')
			{
				continue;
			}
			if (visited[nx][ny])
			{
				continue;
			}

			// 늑대인지 양인지
			if (field[nx][ny] == 'v')
			{
				nv++;
			}
			if (field[nx][ny] == 'o')
			{
				no++;
			}

			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}

	if (no > nv)
	{
		o += no;
	}
	else
	{
		v += nv;
	}
}

int main()
{
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> field[i][j];
		}
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (!visited[i][j] && (field[i][j] == 'v' || field[i][j] == 'o'))
			{
				BFS(i, j, field[i][j]);
			}
		}
	}

	cout << o << " " << v;
}