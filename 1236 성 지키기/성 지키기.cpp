#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, cnt = 0;
	cin >> N >> M;
	cin.ignore();

	vector<string> v, v2;
	string s;
	vector<int> row, col;
	for(int i=0;i<N;i++)
	{
		getline(cin, s);
		v.push_back(s);
		v2.push_back(s);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (v[i][j] == 'X')
			{
				row.push_back(i + 1);
				col.push_back(j + 1);
			}
		}
	}
	sort(row.begin(), row.end());
	sort(col.begin(), col.end());

	row.erase(unique(row.begin(), row.end()), row.end());
	col.erase(unique(col.begin(), col.end()), col.end());

	if (N - row.size() >= M - col.size())
		cout << N - row.size();
	else
		cout << M - col.size();

	return 0;
}
