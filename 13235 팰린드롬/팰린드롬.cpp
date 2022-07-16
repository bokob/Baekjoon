#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	bool p = true;

	if (s.size() % 2 == 0)
	{
		for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
		{
			if (s[i] != s[j])
			{
				p = false;
				break;
			}
		}
	}
	else
	{
		for (int i = 0, j = s.size() - 1; i != j; i++, j--)
		{
			if (s[i] != s[j])
			{
				p = false;
				break;
			}
		}
	}

	if (p == true)
		cout << "true";
	else
		cout << "false";

	return 0;
}
