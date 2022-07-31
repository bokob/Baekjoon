#include <iostream>
#include <string>
using namespace std;

string compatibility(string r)
{
	string temp = "";
	int tmp;
	if (r.size() > 2)
	{
		for (int i = 0; i < r.size() - 1; i++)
		{
			tmp = (r[i] - '0') + (r[i + 1] - '0');
			if (tmp >= 10)
				tmp = tmp % 10;

			temp += to_string(tmp);
		}
		return compatibility(temp);
	}
	return r;
}

int main()
{
	string A;
	string B;
	string r = "";
	getline(cin, A);
	getline(cin, B);

	for (int i = 0; i < 8; i++)
		r += A.substr(i, 1) + B.substr(i, 1);

	cout << compatibility(r);
}
