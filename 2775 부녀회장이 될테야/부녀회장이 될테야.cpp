#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> v;

	int T;
	cin >> T;

	int apart[15][14];		// 0번 인덱스를 1호로 생각

	for (int i = 0; i < 14; i++)
	{
		apart[0][i] = i + 1;	// 0층의 모든 호수에 수 대입
		apart[i][0] = 1;		// 0층 ~ 13층의 1호에 1
	}
	
	apart[14][0] = 1;	// 14층 1호에 1

	for (int i = 1; i <= 14; i++)	// 1층 ~ 14층
	{
		for (int j = 1; j < 14; j++)		// 2호 ~ 14호
		{
			apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
		}
	}

	int k, n;	// k: 층 n: 호수

	for (int i = 0; i < T; i++)
	{
		cin >> k >> n;
		v.push_back(apart[k][n - 1]);
	}

	for (int i = 0; i < T; i++)
	{
		cout << v[i] << "\n";
	}
  
	return 0;
}
