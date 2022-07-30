#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, r;
	cin >> s;
	int len = s.size();
	double tmp = 0;

	if (len % 3 == 0)
	{
		for (int i = 0, j = 1, k = 2; i < len - 2 && j < len - 1 && k < len; i += 3, j += 3, k += 3)
		{
			if (s[i] == '1')
				tmp += pow(2, 2);
			if (s[j] == '1')
				tmp += pow(2, 1);
			if (s[k] == '1')
				tmp += pow(2, 0);

			r += to_string((int)tmp);
			tmp = 0;
		}
	}
	else if (len % 3 == 1)
	{
		if (s[0] == '1')
			tmp += pow(2, 0);

		r += to_string((int)tmp);
		tmp = 0;
		for (int i = 1, j = 2, k = 3; i < len - 2 && j < len - 1 && k < len; i += 3, j += 3, k += 3)
		{
			if (s[i] == '1')
				tmp += pow(2, 2);
			if (s[j] == '1')
				tmp += pow(2, 1);
			if (s[k] == '1')
				tmp += pow(2, 0);

			r += to_string((int)tmp);
			tmp = 0;
		}
	}
	else if (len % 3 == 2)
	{
		if (s[0] == '1')
			tmp += pow(2, 1);
		if (s[1] == '1')
			tmp += pow(2, 0);
		
		r += to_string((int)tmp);
		tmp = 0;
		for (int i = 2, j = 3, k = 4; i < len - 2 && j < len - 1 && k < len; i += 3, j += 3, k += 3)
		{
			if (s[i] == '1')
				tmp += pow(2, 2);
			if (s[j] == '1')
				tmp += pow(2, 1);
			if (s[k] == '1')
				tmp += pow(2, 0);

			r += to_string((int)tmp);
			tmp = 0;
		}
	}

	cout << r;

	return 0;
}
