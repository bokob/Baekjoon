#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, t;
	cin >> N;

	vector<int> T;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		T.push_back(t);
	}

	sort(T.rbegin(), T.rend());
	
	for (int i = 0, j = N - 1; i < N; i++, j--)
		T[i] -= j;

	cout << N + *max_element(T.begin(), T.end()) + 1;

	return 0;
}
