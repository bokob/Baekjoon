#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string X, Y, Z;
	cin >> X >> Y;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());

	Z = to_string(stoi(X) + stoi(Y));
	reverse(Z.begin(), Z.end());

	cout << stoi(Z);

	return 0;
}
