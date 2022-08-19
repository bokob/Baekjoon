#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int cnt;

	while (1)
	{
		getline(cin, s);
		cnt = 0;
		if (!s.compare("#"))
			break;

		for (long unsigned int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'a' || s[i] == 'A' ||
				s[i] == 'e' || s[i] == 'E' ||
				s[i] == 'i' || s[i] == 'I' ||
				s[i] == 'o' || s[i] == 'O' ||
				s[i] == 'u' || s[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}
