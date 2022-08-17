#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, temp;
	cin >> N;

	vector<int> n;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		n.push_back(temp);
	}
	sort(n.begin(), n.end());

	cin >> M;
	vector<int> m;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		m.push_back(temp);
	}

	for (int i = 0; i < M; i++)
		cout << upper_bound(n.begin(), n.end(), m[i]) - lower_bound(n.begin(), n.end(), m[i]) << " ";

	return 0;
}
