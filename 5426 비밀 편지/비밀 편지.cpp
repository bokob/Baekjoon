#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void decode(string& s)
{
	
	int len = s.size();								// 문자열 길이
	unsigned long int r = (int)sqrt(len);		// 정사각형 한 변

	vector<string> v;
	string temp;

	for (int i = 0; i < len; i += r)
	{
		temp = s.substr(i, r);
		reverse(temp.begin(), temp.end());
		v.push_back(temp);
	}
	for (unsigned long int i = 0; i < r; i++)
	{
		for (unsigned long int j = 0; j < r; j++)
		{
			cout << v[j][i];
		}
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();

	string s;
	for (int i = 0; i < T; i++)
	{
		getline(cin,s);
		decode(s);
	}
	return 0;
}
