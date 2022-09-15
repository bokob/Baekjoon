#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();

	string s, strbuffer;
	vector<vector<string>> v;
	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		stringstream ss(s);
		vector<string> tmp;
		while (ss >> strbuffer)
		{
			reverse(strbuffer.begin(), strbuffer.end());
			tmp.push_back(strbuffer);
		}
		v.push_back(tmp);
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
