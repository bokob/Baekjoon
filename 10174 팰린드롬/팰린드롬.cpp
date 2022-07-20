#include <iostream>
#include <string>
#include <vector>
using namespace std;

void palindrome(string s)
{
	bool flag = true;

	for (int i = 0; i < s.size(); i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] += 32;
	}

	for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
	{
		if (s[i] != s[j])
		{
			flag = false;
			break;
		}
	}

	if (flag)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();

	vector<string> v;
	string temp;

	for (int i = 0; i < n; i++)
	{
		getline(cin, temp);
		v.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		palindrome(v[i]);
	}

	return 0;
}
