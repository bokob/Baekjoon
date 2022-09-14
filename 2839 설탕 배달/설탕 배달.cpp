#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N >= 5)
	{
		if (N % 5 == 0)                // 5, 10, 15
			cout << N / 5;
		else if (N % 5 == 4)
		{
			if (N == 9)
				cout << 3;
			else                       // 14, 19
				cout << N / 5 + 2;
		}
		else if (N % 5 == 3)
		{
			if (N == 8)
				cout << 2;
			else                      // 13, 18, 23
				cout << N / 5 + 1;

		}
		else if (N % 5 == 2)
		{
			if (N == 7)
				cout << -1;
			else                      // 12, 17, 22, 27
				cout << N / 5 + 2;
		}
		else if (N % 5 == 1)
		{
			if (N == 6)
				cout << 2;
			else                      // 11, 16, 21
				cout << N / 5 + 1;
		}
	}
	else if (N >= 3)		// 3이상 5미만
	{
		if (N == 4)
			cout << -1;
		else
			cout << 1;
	}

	return 0;
}
