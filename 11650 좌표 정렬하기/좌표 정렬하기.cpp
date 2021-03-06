#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int x, y;

	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v.push_back(pair<int, int>(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
