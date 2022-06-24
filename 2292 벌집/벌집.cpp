#include <iostream>
using namespace std;

int main()
{
	int N, s = 1, e = 1, count = 1;		// s: 탐색 시작 e: 탐색 마지막 count: 

	cin >> N;

	while (1)
	{
		if (s <= N && N <= e)	// N이 탐색범위에 있는 경우
		{
			cout << count;
			break;
		}
		else	// 탐색 범위와 바퀴수 조정
		{
			s = e + 1;
			e = e + 6 * count;
			count++;
		}
	}
	return 0;
}
