#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, N, temp;
	cin >> A >> B;
	cin >> N;

	vector<int> v;
	vector<int> gap;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
		if (B - temp >= 0)
			gap.push_back(B - temp);
		else
			gap.push_back(temp - B);
	}

	if (A > B)
		gap.push_back(A - B);
	else if (A < B)
		gap.push_back(B - A);

	if (gap[N] < gap[min_element(gap.begin(), gap.end()) - gap.begin()])
		cout << gap[N];
	else if (gap[N] > gap[min_element(gap.begin(), gap.end()) - gap.begin()])
	{
		A = v[min_element(gap.begin(), gap.end()) - gap.begin()];

		if (A > B)
			cout << A - B + 1;
		else
			cout << B - A + 1;
	}
	else
	{
		if (A > B)
			cout << A - B;
		else
			cout << B - A;
	}

	return 0;
}
