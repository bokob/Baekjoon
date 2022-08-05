#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	vector<int> v(N + 1, 1), r;	// 전부 소수인 것으로 초기화
	v[1] = false;
	
	// 에라토스테네스의 체
	for (int i = 2; i < (int)sqrt(N) + 1; i++)	// 소수인지 판별하기 위해 제곱근까지 파악한다.
	{
		if (v[i] == true)	// 만약 소수라면 소수가 맞는지 판별
		{
			int j = 2;
			while (i * j <= N)	// 1을 제외한 모든 수의 배수인지 확인한다
			{
				v[i * j] = false;
				j += 1;
			}
		}
	}

	for (int i = M; i < N + 1; i++)
	{
		if (v[i])
			r.push_back(i);
	}

	if (r.size() == 0)
		cout << -1;
	else
	{
		cout << accumulate(r.begin(), r.end(), 0) << "\n";
		cout << r[0];
	}

	return 0;
}
