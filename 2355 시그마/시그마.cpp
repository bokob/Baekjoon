#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;
	cin >> A >> B;

	if (A > B) 
		swap(A, B);

	cout << ((B - A + 1) * (A + B)) / 2;

	return 0;
}
