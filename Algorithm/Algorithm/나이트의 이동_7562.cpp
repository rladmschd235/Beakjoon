#include <iostream>
#include <queue>
using namespace std;

int T, I;
int tar_x, tar_y, cur_x, cur_y;

int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

int board[301][301];
bool visited[301][301];
queue<pair<int, int>> q;

void Reset() {

	while (!q.empty()) q.pop();

	for (int i = 0; i < 301; i++)
	{
		for (int j = 0; j < 301; j++)
		{
			visited[i][j] = 0;
			board[i][j] = 0;
		}
	}
}

int BFS(int x, int y)
{
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty())
	{
		int dir_x = q.front().first;
		int dir_y = q.front().second;

		q.pop();

		if (dir_x == tar_x && dir_y == tar_y)
		{
			return board[dir_x][dir_y];
			while (!q.empty()) {
				q.pop();
			}
			break;
		}

		for (int i = 0; i < 8; i++)
		{
			int new_x = dir_x + dx[i];
			int new_y = dir_y + dy[i];

			if (new_x >= I || new_y >= I || new_x < 0 || new_y < 0)
			{
				continue;
			}

			if (visited[new_x][new_y] == 0)
			{
				board[new_x][new_y] = board[dir_x][dir_y] + 1;
				visited[new_x][new_y] = true;
				q.push({ new_x, new_y });
			}
		}
	}
}

int main()
{
	cin >> T;

	for(int i = 0; i < T; i++)
	{	
		cin >> I;

		cin >> cur_x >> cur_y >> tar_x >> tar_y;

		cout << BFS(cur_x, cur_y) << "\n";
		
		Reset();
	}
}