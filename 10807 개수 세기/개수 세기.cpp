#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, temp, obj;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	cin >> obj;

	cout << count(v.begin(), v.end(), obj);

	return 0;
}
