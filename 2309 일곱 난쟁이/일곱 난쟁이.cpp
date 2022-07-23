#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	vector<int> temp{ 1,1,1,1,1,1,1,0,0 };
	vector<int> r;
	int height;
	for (int i = 0; i < 9; i++)
	{
		cin >> height;
		v.push_back(height);
	}

	sort(v.begin(), v.end());

	int sum;
	do 
	{
		sum = 0;
		r.clear();
		for (int i = 0; i < v.size(); i++)
		{
			if (temp[i] == 1)
				r.push_back(v[i]);
		}

		for (int i = 0; i < r.size(); i++)
		{
			sum += r[i];
		}

		if (sum == 100)
			break;
	} while (prev_permutation(temp.begin(), temp.end()));

	for (int i = 0; i < r.size(); i++)
		cout << r[i] << "\n";

	return 0;
}
