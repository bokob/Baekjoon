#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, temp;
	cin >> N;

	vector<int> v, tmp;
	for (int i = 0; i < N; i++)	// 수들을 입력 받는다.
	{
		cin >> temp;
		v.push_back(temp);
	}
	tmp = v;	// 임시 배열

	/* 정렬 후에 중복된 원소들을 제거한다.unique 함수는 중복된 값들을 뒤로 보낸다.
	이 값들은 쓰레기 값으로 불린다. iterator가 그 값들의 처음을 가르키고 erase로 그 값들을 지워준다. */
	sort(tmp.begin(), tmp.end());
	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

	for (unsigned long int i = 0; i < v.size(); i++)	// 그 수들의 인덱스 값으로 좌표를 압축할 수 있다.
		cout << lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin() << " ";
	
	return 0;
}
