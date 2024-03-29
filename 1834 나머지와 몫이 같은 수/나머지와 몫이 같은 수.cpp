#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N;
	cin >> N;

	long long sum = 0;
	for (long long i = 1; i < N; i++)
		sum += N * i + i;

	cout << sum;

	return 0;
}
