#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, N, cnt = 0;
	cin >> A >> B >> N;

	int temp = A, result = 0;
	while (cnt<=N)
	{
		int digit = 0;
		cnt++;
		while (temp >= B)
		{
			temp -= B;
			digit++;
		}
		result = digit;
		temp *= 10;

	}
	cout << result;

	return  0;
}
