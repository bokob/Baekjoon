#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

void dfs(int start, vector<int> network[], vector<bool>& visit)
{
	visit[start] = true;
	for (unsigned long int i = 0; i < network[start].size(); i++)
	{
		int will_go = network[start][i];
		if (!visit[will_go])
		{
			cnt++;
			dfs(will_go, network, visit);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int computerN;
	cin >> computerN;

	vector<int>* network = new vector<int>[computerN + 1];
	vector<bool> visit(computerN + 1, false);

	int direct_connectN;
	cin >> direct_connectN;

	for (int i = 0; i < direct_connectN; i++)
	{
		int u, v;
		cin >> u >> v;
		network[u].push_back(v);
		network[v].push_back(u);
	}

	dfs(1, network, visit);

	cout << cnt;

	return 0;
}
