#include <iostream>
#include <cmath>

using namespace std;

void existence(double x1, double y1, double r1, double x2, double y2, double r2)
{
	double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));	// 두 원의 중심간의 거리
	
	if (x1 == x2 && y1 == y2 && r1 == r2)		// 두 원이 같은 경우(합동)
		cout << -1 << "\n";
	else if (r2 - r1 < d && d < r2 + r1)		// 두 점에서 만나는 경우
		cout << 2 << "\n";
	else if (r1 + r2 == d || r2 - r1 == d)		// 한 점에서 만나는 경우(외접 or 내접)
		cout << 1 << "\n";
	else if (r1 + r2 < d || d < r2 - r1 || (d == 0 && (d < r2 - r1 || r1 + r2 < d))) // 만나지 않는 경우(외부 or 내부 or 동심원)
		cout << 0 << "\n";
}

int main()
{
	int T;
	double x1, y1, r1, x2, y2, r2;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (r1 > r2)		// 작은 원, 큰 원이 되도록 순서를 바꾼다.
		{
			swap(x1, x2);
			swap(y1, y2);
			swap(r1, r2);
		}
		existence(x1, y1, r1, x2, y2, r2);
	}

	return 0;
}
