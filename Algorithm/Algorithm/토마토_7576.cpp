#include <iostream>
#include <queue>
using namespace std;

int M, N;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

queue <pair<int, int>> q;

bool visited[1000][1000];
int box[1000][1000];

void Tomato()
{
	while (!q.empty())
	{
		int top_x = q.front().first;
		int top_y = q.front().second;

		visited[top_x][top_y] = true;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = top_x + dx[i];
			int new_y = top_y + dy[i];

			if (new_x >= N || new_y >= M || new_x < 0 || new_y < 0)
			{
				continue;
			}

			if (box[new_x][new_y] == 0 && !visited[new_x][new_y])
			{
				box[new_x][new_y] = box[top_x][top_y] + 1;
				visited[new_x][new_y] = true;

				q.push({ new_x, new_y });
			}
		}
	}
}

int main()
{
	int result = 0;

	cin >> M >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> box[i][j];

			if (box[i][j] == 1)
			{
				q.push({ i, j });
			}
		}
	}

	Tomato();

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (box[i][j] == 0 && !visited[i][j])
			{
				cout << -1; 
				return 0;
			}
			if (box[i][j] > result)
			{
				result = box[i][j];
			}
		}
	}

	cout << result - 1;
	return 0;
}