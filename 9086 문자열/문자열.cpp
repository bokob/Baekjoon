#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	string s;
	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		cout << s[0] << s.back() << "\n";
	}
}
