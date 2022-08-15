#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	cin.ignore();

	string s;
	map<string, int> m;
	for (int i = 0; i < N; i++)
	{
		getline(cin, s);
		m.insert(make_pair(s, 0));
	}
	
	vector<string> r;
	for (int i = 0; i < M; i++)
	{
		getline(cin, s);
		if (m.count(s) == 1)
			r.push_back(s);
	}

	sort(r.begin(), r.end());
	cout << r.size() << "\n";
	for (unsigned long int i = 0; i < r.size(); i++)
		cout << r[i] << "\n";

	return 0;
}
