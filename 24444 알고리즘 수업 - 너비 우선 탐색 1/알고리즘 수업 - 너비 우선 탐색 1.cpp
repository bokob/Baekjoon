#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> bfs(int start, vector<int> graph[], vector<bool>& visit)
{
	vector<int> v;
	vector<int> r;
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while (!q.empty())
	{
		int from = q.front();
		q.pop();
		v.push_back(from);

		sort(graph[from].begin(), graph[from].end());

		for (long unsigned int i = 0; i < graph[from].size(); i++)
		{
			int to = graph[from][i];
			if (visit[to] == false)
			{
				q.push(to);
				visit[to] = true;
			}
		}
	}
	return v;
}

int main()
{
	int N, M, R;
	cin >> N >> M >> R;

	vector<int> v;
	vector<int> r(N,0);

	vector<int>* graph = new vector<int>[N + 1];
	vector<bool> visit(N + 1, false);

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	v = bfs(R, graph, visit);

	for (int i = 0; i < v.size(); i++)
		r[v[i] - 1] = i + 1;

	for (int i = 0; i < N; i++)
		cout << r[i] << "\n";

	return 0;
}
