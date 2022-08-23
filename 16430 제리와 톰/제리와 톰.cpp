#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	cin >> A >> B;

	A = B - A;

	for (int i = 2; i < B; i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			A /= i;
			B /= i;
		}
	}

	cout << A << " " << B;

	return 0;
}
