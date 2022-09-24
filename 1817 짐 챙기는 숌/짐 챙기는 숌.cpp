#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, temp = 0, cnt = 0;
	cin >> N >> M;

	if (N == 0)
		cout << 0;
	else
	{
		vector<int> b;

		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			b.push_back(temp);
		}

		temp = M;
		cnt++;
		for (int i = 0; i < N; i++)
		{
			if (temp < b[i])
			{
				temp = M;
				cnt++;
			}
			temp -= b[i];
		}
		cout << cnt;
	}

	return 0;
}
