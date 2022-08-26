#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first > b.first;
}

int main()
{
	int N, temp;
	cin >> N;
	double sum = 0;
	vector<pair<int, int>> vmode;	// 개수, 숫자
	vector<int> vmedian;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		sum += temp;
		vmedian.push_back(temp);

		auto it = find_if(vmode.begin(), vmode.end(),
			[&temp](const pair<int, int>& element) { return element.second == temp; });
		if (vmode.end() == it)
			vmode.push_back(make_pair(1, temp));
		else
			it->first++;
	}
	sort(vmedian.begin(), vmedian.end());
	sort(vmode.begin(), vmode.end(), cmp);
	size_t len = vmedian.size();
	
	// 산술평균
	sum = sum / N;
	if (sum < 0)	// 음수
		cout << (int)(sum - 0.5) << "\n";
	else			// 양수
		cout << (int)(sum + 0.5) << "\n";

	// 중앙값
	cout << vmedian[len / 2] << "\n";

	// 최빈값
	if (vmode.size() == 1)
		cout << vmode[0].second << "\n";
	else
	{
		if (vmode[0].first != vmode[1].first)
			cout << vmode[0].second << "\n";
		else
			cout << vmode[1].second << "\n";
	}

	// 범위
	cout << vmedian[len - 1] - vmedian[0];
	
	return 0;
}
