#include <iostream>
#include <queue>
using namespace std;

bool visited[600][600];
char school[600][600];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int N, M, result = 0;

void BFS(int x, int y)
{
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

			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
			{
				continue;
			}
			if (school[nx][ny] == 'X')
			{
				continue;	
			}
			if (visited[nx][ny])
			{
				continue;
			}
			if (school[nx][ny] == 'P')
			{
				result++;
			}
			
			visited[nx][ny] = true;
			q.push({ nx, ny });
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sx = 0, sy = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> school[i][j];
			
			if (school[i][j] == 'I')
			{
				sx = i;
				sy = j;
			}
		}
	}

	BFS(sx, sy);

	if (result == 0)
	{
		cout << "TT";
	}
	else
	{
		cout << result;
	}
}