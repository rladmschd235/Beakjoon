#include <iostream>
using namespace std;

int board[50][50];
int visited[50][50];
int	row, col, num;

void DFS(int y, int x) // �࿭
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
		// ���ͷ� ���������ϸ� �þ �κи� �ʱ�ȭ�ȴ�.
		// ���� ����ҰŸ� clear�� �ʱ�ȭ ���������. ������ ��ϵȰ� �����ֱ� ����
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;

		cin >> row >> col >> num; // row ��, col ��

		for (int i = 0; i < num; i++)
		{
			cin >> x >> y; // �� ��ǥ �� ��ǥ
			board[y][x] = 1; // �࿭
		}

		for (int i = 0; i < col; i++) // ��
		{
			for (int j = 0; j < row; j++) // ��
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
