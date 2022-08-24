#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int& a, int& b)
{
	return a > b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, N, math;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> N;
		vector<int> v;
		int gap = 0;
		for (int j = 0; j < N; j++)
		{
			cin >> math;
			v.push_back(math);
		}
		sort(v.begin(), v.end(), cmp);
		for (int j = 0; j < N - 1; j++)
		{
			if (gap < v[j] - v[j + 1])
				gap = v[j] - v[j + 1];
		}

		cout << "Class " << i + 1 << "\n";
		cout << "Max " << v[0] << ", " << "Min " << v[N - 1] << ", " << "Largest gap " << gap << "\n";
	}
	return 0;
}
