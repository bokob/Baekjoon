#include <iostream>
#include <string>

using namespace std;

int check_palindrome(string s);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);

	cout << check_palindrome(s);

	return 0;
}

int check_palindrome(string s)
{
	bool flag = true;

	if (s.size() % 2 == 0)
	{
		for (size_t i = 0; i < (s.size() / 2); i++)
		{
			if (s[i] != s[s.size() - 1 - i])
			{
				flag = false;
				break;
			}
		}
	}
	else
	{
		for (size_t i = 0; i < (s.size() / 2); i++)
		{
			if (s[i] != s[s.size() - 1 - i])
			{
				flag = false;
				break;
			}
		}
	}

	if (flag)
		return 1;

	return 0;
}
