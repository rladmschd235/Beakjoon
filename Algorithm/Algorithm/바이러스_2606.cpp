#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> computers;
vector<bool> visited;
int answer = 0;

void DFS(int v)
{
	visited[v] = true;

	for (int i = 0; i < computers[v].size(); i++)
	{
		int k = computers[v][i];

		if (!visited[k])
		{
			answer++;
			DFS(k);	
		}
	}
}

int main()
{
	int N, M, X, Y;

	cin >> N >> M;
	
	computers.resize(N+1);
	visited.resize(N+1);

	for (int i = 0; i < M; i++)
	{
		cin >> X >> Y;
		computers[X].push_back(Y);
		computers[Y].push_back(X);
	}

	DFS(1);

	cout << answer;
}