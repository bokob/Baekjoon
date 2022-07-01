#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int>& ary, int left, int right, int key);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> ary;
	vector<int>& aryN = ary;
	ary.clear();

	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		ary.push_back(temp);
	}

	sort(ary.begin(), ary.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		if (binary_search(aryN, 0, aryN.size() - 1, temp))
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}

	return 0;
}

int binary_search(vector<int>& ary,int left, int right, int key)
{
	int mid = (left + right) / 2;

	if (left <= right)
	{
		if (key == ary[mid])
			return 1;
		else if (key > ary[mid])
			return binary_search(ary, mid + 1, right, key);
		else if (key < ary[mid])
			return binary_search(ary, left, mid - 1, key);
	}
	else
		return 0;
}
