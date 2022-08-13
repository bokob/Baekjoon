#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	cin >> A >> B;

	vector<int> v;

	for (int i = 1; i <= B; i++)
	{
		for (int j = 1; j <= i; j++)
			v.push_back(i);
	}

	cout << accumulate(v.begin() + A - 1, v.begin() + B, 0);

	return 0;
}
