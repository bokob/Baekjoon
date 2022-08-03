#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, temp;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (unsigned long int i = v.size() - 1; i >= 2; i--)
	{
		if (v[i] < (v[i - 1] + v[i - 2]))
		{
			cout << v[i] + v[i - 1] + v[i - 2];
			return 0;
		}
	}

	cout << -1;
}
