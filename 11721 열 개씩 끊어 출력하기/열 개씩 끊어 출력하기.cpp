#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i];

		if ((i + 1) % 10 == 0)
			cout << "\n";
	}
	return 0;
}
