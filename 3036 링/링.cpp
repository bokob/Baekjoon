#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, r;
	cin >> N;
	
	vector<int> v;
	vector<pair<int, int>> c;
	for (int i = 0; i < N; i++)
	{
		cin >> r;
		v.push_back(r);
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = v[i]; j >= 1; j--)
		{
			if (v[0] % j == 0 && v[i] % j == 0)
			{
				c.push_back({ v[0] / j , v[i] / j });
				break;
			}
		}
		cout << c[i - 1].first << "/" << c[i - 1].second << "\n";
	}
	return 0;
}
