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

	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		if (binary_search(v.begin(), v.end(), temp))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}

	return 0;
}
