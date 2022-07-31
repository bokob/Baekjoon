#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool condition(char a, char b)
{
	return a > b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	getline(cin, N);
	

	sort(N.begin(), N.end(), condition);

	cout << N;

	return 0;
}
