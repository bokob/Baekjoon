#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

bool compare_order(tuple<int, string, int> v1, tuple<int, string, int> v2)
{
	if (get<0>(v1) == get<0>(v2))
		return (get<2>(v1) < get<2>(v2));
	else
		return get<0>(v1) < get<0>(v2);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;

	int age;
	string name;

	vector <tuple<int, string, int>> v;

	for (int i = 0; i < N; i++)
	{
		cin >> age >> name;
		v.push_back(make_tuple(age, name, i));
	}

	sort(v.begin(), v.end(), compare_order);

	for (int i = 0; i < v.size(); i++)
	{
		cout << get<0>(v[i]) << " " << get<1>(v[i]) << "\n";
	}
	return 0;
}
