#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	vector<int> psum;

	int N, M, i, j, temp = 0;
	cin >> N >> M;

	v.push_back(0);
	for (int k = 1; k <= N; k++)
	{
		cin >> temp;
		temp += v[k - 1];
		v.push_back(temp);
	}

	for (int k = 0; k < M; k++)
	{
		cin >> i >> j;
		cout << v[j] - v[i - 1] << "\n";
	}

	return 0;
}
