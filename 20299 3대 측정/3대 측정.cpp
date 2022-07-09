#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, L;
	cin >> N >> K >> L;

	int** ptr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		ptr[i] = new int[4];
		ptr[i][3] = 0;			// 0으로 초기화
	}

	int x1, x2, x3, count = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> x1 >> x2 >> x3;

		if (x1 < L || x2 < L || x3 < L)
			continue;

		ptr[i][0] = x1;
		ptr[i][1] = x2;
		ptr[i][2] = x3;

		if (ptr[i][0] + ptr[i][1] + ptr[i][2] >= K)
		{
			count++;
			ptr[i][3] = 1;
		}
	}

	cout << count << "\n";
	for (int i = 0; i < N; i++)
	{
		if (ptr[i][3] == 1)
		{
			cout << ptr[i][0] << " " << ptr[i][1] << " " << ptr[i][2] << " ";
		}
	}

	return 0;
}
