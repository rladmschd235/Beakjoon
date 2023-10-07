#include <iostream>
using namespace std;

int board[50][50];
int visited[50][50];
int	row, col, num;

void DFS(int y, int x) // 행열
{
	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };
	
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (ny >= col || nx >= row || nx < 0 || ny < 0)
		{
			continue;
		}
		if (board[ny][nx] == 1 && visited[ny][nx] == 0)
		{
			DFS(ny, nx);
		}
	}
	
	return;
}

int main()
{
	int testcase, x, y;

	cin >> testcase;

	while (testcase--)
	{
		// 벡터로 리사이즈하면 늘어난 부분만 초기화된다.
		// 벡터 사용할거면 clear로 초기화 시켜줘야함. 기존에 기록된게 남아있기 때문
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;

		cin >> row >> col >> num; // row 행, col 열

		for (int i = 0; i < num; i++)
		{
			cin >> x >> y; // 열 좌표 행 좌표
			board[y][x] = 1; // 행열
		}

		for (int i = 0; i < col; i++) // 행
		{
			for (int j = 0; j < row; j++) // 열
			{
				if (board[i][j] == 1 && visited[i][j] == 0)
				{
					cnt++;
					DFS(i, j);
				}
			}
		}

		cout << cnt << "\n";
	}
}
