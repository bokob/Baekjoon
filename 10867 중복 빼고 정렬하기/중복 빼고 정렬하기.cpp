#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;
	cin.ignore();

	string s;
	getline(cin, s);

	vector<int> iv;
	iv.clear();
	istringstream ss(s);
	string stringBuffer;
	vector<string> sv;
	sv.clear();

	while (getline(ss, stringBuffer, ' '))
	{
		sv.push_back(stringBuffer);
	}

	for (int i = 0; i < sv.size(); i++)
	{
		iv.push_back(stoi(sv[i]));
	}

	sort(iv.begin(), iv.end());
	iv.erase(unique(iv.begin(), iv.end()), iv.end());

	for (int i = 0; i < iv.size(); i++)
	{
		printf("%d ", iv[i]);
	}

	return 0;
}
