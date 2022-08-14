#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, cnt = 0;
	cin >> N >> M;
	cin.ignore();

	map<string, int> m;
	string temp;

	for (int i = 0; i < N; i++)
	{
		getline(cin, temp);
		m.insert(make_pair(temp, 1));
	}
	for (int i = 0; i < M; i++)
	{
		getline(cin, temp);
		if (m.count(temp))
			cnt++;
	}

	cout << cnt;

	return 0;
}
