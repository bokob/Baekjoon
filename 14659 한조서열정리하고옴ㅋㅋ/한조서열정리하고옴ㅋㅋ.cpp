#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, temp, cnt = 0, highest = 0, max = 0;
	cin >> N;
	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		if (v[i] > highest)
		{
			highest = v[i];
			cnt = 0;
		}
		else cnt++;
		if (max < cnt) max = cnt;
	}

	cout << max;
	
	return 0;
}
