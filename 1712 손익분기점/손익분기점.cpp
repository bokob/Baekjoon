#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, C;			// A: 고정비, B: 재료비와 인건비 C: 노트북 가격
	cin >> A >> B >> C;

	int temp = C - B;

	if (temp <= 0)
		cout << -1;
	else
		cout << A / temp + 1;

	return 0;
}
