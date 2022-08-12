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

	int N;
	cin >> N;
	cin.ignore();

	vector<vector<string>> v;
	vector<string>tmp;
	string s;

	for (int i = 0; i < N; i++)
	{	
		getline(cin, s);
		istringstream ss(s);
		string temp;

		while (getline(ss, temp, ' '))
			tmp.push_back(temp);

		reverse(tmp.begin(), tmp.end());
		v.push_back(tmp);
		tmp.clear();
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Case #" << i + 1 << ": ";
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
