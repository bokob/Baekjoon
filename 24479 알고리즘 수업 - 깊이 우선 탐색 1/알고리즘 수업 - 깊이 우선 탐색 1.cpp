#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int start, vector<int> graph[], vector<bool> &visit, vector<int> &v)
{
	visit[start] = true;
	v.push_back(start);
	sort(graph[start].begin(), graph[start].end());
	for (unsigned long int i = 0; i < graph[start].size(); i++)
	{
		int will_go = graph[start][i];
		if (!visit[will_go])
		{
			dfs(will_go, graph, visit, v);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, R;
	cin >> N >> M >> R;

	vector<int>* graph = new vector<int>[N + 1];
	vector<bool> visit(N + 1, false);


	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	vector<int> v, r(N, 0);

	dfs(R, graph, visit, v);

	for (int i = 0; i < v.size(); i++)
		r[v[i] - 1] = i + 1;

	for (int i = 0; i < N; i++)
		cout << r[i] << "\n";

	return 0;
}
