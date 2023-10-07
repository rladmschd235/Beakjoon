#include<iostream>
#include<queue>
using namespace std;

string board[101];
int row, col;
int visited[101][101];

queue<pair<int, int>>que;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
    que.push({ x, y });
    visited[x][y] = 1;
    while (!que.empty())
    {
        int x = que.front().first; // 행
        int y = que.front().second; // 열
        que.pop();
        for (int i = 0; i < 4; i++) // 현제 자표의 상화좌우를 살핀다.
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= col || ny >= row) continue; // 탐색 범위 벗어난 것 무시
            if (board[nx][ny] == '1' && visited[nx][ny] == 0)
            {
                que.push({ nx,ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
}
int main()
{
    cin >> col >> row; // col 행 사이즈 row 열 사이즈
    for (int i = 0; i < col; i++)
    {
        cin >> board[i];
    }
    BFS(0, 0);
    
    cout << visited[col - 1][row - 1];

    //for (int i = 0; i < col; i++)
    //{
    //    for (int j = 0; j < row; j++)
    //    {
    //        cout << visited[i][j] << " ";
    //    }

    //    cout << "\n";
    //}
}