#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[101][101] = {};
int zone[101][101] = {};

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int M, N, K;

void Reset()
{
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			zone[i][j] = 0;
		}
	}
}

int BFS(int x, int y)
{
	int count = 1;

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

			if (nx < 0 || ny < 0 || nx >= M || ny >= N)
			{
				continue;
			}

			if (zone[nx][ny] == 0 && !visited[nx][ny])
			{
				visited[nx][ny] = true;
				q.push({ nx, ny });
				count++;
			}
		}
	}

	return count;
}

int main()
{
	vector<int> result;

	int dx, dy, ux, uy, count = 0;

	cin >> M >> N >> K;

	Reset();

	for (int i = 0; i < K; i++)
	{
		cin >> dx >> dy >> ux >> uy;

		for (int i = dy; i < uy; i++) // 채우는 거도 y부터
		{
			for (int j = dx; j < ux; j++)
			{
				zone[i][j]++;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (zone[i][j] == 0 && !visited[i][j])
			{
				count++;
				result.push_back(BFS(i, j));
			}
		}
	}

	sort(result.begin(), result.end());

	cout << count << "\n";

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
}