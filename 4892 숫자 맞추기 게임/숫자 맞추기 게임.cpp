#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<string, int>> v;
	while (1)
	{
		int n0, n1, n2, n3, n4;
		cin >> n0;

		if (n0 == 0)
			break;

		n1 = 3 * n0;

		if (n1 % 2 == 0)
		{
			n2 = n1 / 2;
			n3 = 3 * n2;
			n4 = n3 / 9;

			v.push_back({ "even", n4 });
		}
		else
		{
			n2 = (n1 + 1) / 2;
			n3 = 3 * n2;
			n4 = n3 / 9;

			v.push_back({ "odd", n4 });
		}
	}

	for (unsigned long int i = 0; i < v.size(); i++)
		cout << i + 1 << ". " << v[i].first << " " << v[i].second << "\n";

	return 0;
}
