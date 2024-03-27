#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string map[26];
bool visited[26][26];
int	N, cnt = 1;

void DFS(int x, int y)
{
	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	visited[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= N || ny >= N || nx < 0 || ny < 0)
		{
			continue;
		}
		if (map[nx][ny] == '1' && !visited[nx][ny])
		{
			cnt++;
			DFS(nx, ny);
		}
	}

	return;
}

int main()
{
	vector<int> result;
	int house = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> map[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == '1' && !visited[i][j])
			{
				cnt = 1;
				house++;
				DFS(i, j);
				result.push_back(cnt);
			}
		}
	}

	cout << house << "\n";

	sort(result.begin(), result.end());

	for (auto r : result)
	{
		cout << r << "\n";
	}
}