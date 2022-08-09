#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool compare(tuple<string, int, int, int> &a, tuple<string, int, int, int> &b)
{
	if (get<3>(a) > get<3>(b))
		return get<3>(a) > get<3>(b);
	else if (get<3>(a) == get<3>(b) && get<2>(a) > get<2>(b))
		return get<2>(a) > get<2>(b);
	else if (get<3>(a) == get<3>(b) && get<2>(a) == get<2>(b) && get<1>(a) > get<1>(b)) 
		return get<1>(a) > get<1>(b);
	else 
		return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, d, m, y;
	cin >> n;

	string name;
	vector<tuple<string, int, int, int>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> d >> m >> y;
		v.push_back(make_tuple(name, d, m, y));
	}

	sort(v.begin(), v.end(), compare);
	
	cout << get<0>(v[0]) << "\n";
	cout << get<0>(v[n-1]);

	return 0;
}
