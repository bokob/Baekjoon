#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<string, int>> v;
	v.push_back(make_pair("c", 1));
	v.push_back(make_pair("d", 2));
	v.push_back(make_pair("e", 3));
	v.push_back(make_pair("f", 4));
	v.push_back(make_pair("g", 5));
	v.push_back(make_pair("a", 6));
	v.push_back(make_pair("b", 7));
	v.push_back(make_pair("C", 8));

	int number;
	string s = "";

	for (int i = 0; i < 8; i++)
	{
		cin >> number;
		s += v[number - 1].first;
	}

	if (s.compare("cdefgabC") == 0)
		cout << "ascending";
	else if (s.compare("Cbagfedc") == 0)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}
