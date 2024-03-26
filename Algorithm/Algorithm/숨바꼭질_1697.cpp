#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph;
vector<bool> visited;

int N, K;

int BFS(int r)
{
	queue<int> q;
	q.push(r);

	visited[r] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		if (x == K)
		{
			break;
		}

		if (x + 1 < 100001 && x + 1 >= 0)
		{
			if (!visited[x + 1])
			{
				q.push(x + 1);
				visited[x + 1] = true;
				graph[x + 1] = graph[x] + 1;
			}
		}

		if (x - 1 < 100001 && x - 1 >= 0)
		{
			if (!visited[x - 1])
			{
				q.push(x - 1);
				graph[x - 1] = graph[x] + 1;
				visited[x - 1] = true;
			}
		}

		if (2 * x < 100001 && x * 2 >= 0) // 조건 문제였음 K 이하로 잡아서 그랬던 거
		{
			if (!visited[x * 2])
			{
				q.push(x * 2);
				graph[x * 2] = graph[x]+1;
				visited[x * 2] = true;
			}
		}
	}

	return graph[K];
}

int main()
{
	cin >> N >> K;

	graph.resize(100001);
	visited.resize(100001);

	cout << BFS(N);
}