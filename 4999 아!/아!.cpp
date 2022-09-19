#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s_jh, s_d;
	getline(cin, s_jh);
	getline(cin, s_d);

	if (s_jh.size() < s_d.size())
		cout << ("no");
	else
		cout << "go";

	return 0;
}
