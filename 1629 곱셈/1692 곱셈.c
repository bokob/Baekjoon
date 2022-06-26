#include <stdio.h>

long long modular(long long A, long long B, long long C);

int main()
{
	long long A, B, C;

	scanf("%lld %lld %lld", &A, &B, &C);

	printf("%lld", modular(A, B, C));

	return 0;
}

long long modular(long long A, long long B, long long C)
{
	if (B == 0)
		return 1;
	if (B == 1)
		return A % C;
	if (B % 2 == 0)
	{
		long long temp = modular(A, B / 2, C);
		return temp * temp % C;
	}
	else
	{
		long long temp = modular(A, B / 2, C);
		return (temp * temp % C * modular(A, 1, C)) % C;
	}
}
