#include <iostream>
#include <queue>
#include <string>
using namespace std;

string board[1001];
bool visited[1001][1001];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

bool isOuter = false;
int M, N;

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

		for (int i = 0; i < 4; i++)
		{
			int nx = fx + dx[i];
			int ny = fy + dy[i];

			if (nx < 0 || ny < 0 || nx >= M || ny >= N)
			{
				continue;
			}

			if (!visited[nx][ny] && board[nx][ny] == '0')
			{
				visited[nx][ny] = true;
				q.push({ nx,ny });

				if (nx == M-1)
				{
					isOuter = true;
				}
			}
		}
	}
}

int main()
{
	cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		cin >> board[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (!visited[0][i] && board[0][i] == '0')
		{
			BFS(0, i);
		}
	}

	if (isOuter)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}