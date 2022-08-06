#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0) break;

		vector<int> v(2 * n + 1, 1);
		v[0] = false, v[1] = false;

		for (int i = 2; i < (int)sqrt(2 * n) + 1; i++)
		{
			if (v[i] == true)
			{
				int j = 2;
				while (i * j <= 2 * n)
				{
					v[i * j] = false;
					j += 1;
				}
			}
		}
		cout << count(v.begin(),v.end(),1) - count(v.begin(), v.begin() + n + 1, 1) << "\n";
	}
	return 0;
}
