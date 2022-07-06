#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M;

	cin >> M;

	int temp = 1000 - M;

	// 잔돈은 500, 100, 50, 10, 5, 1 충분히 존재

	int count = 0;

	while (temp!=0)
	{
		if (temp >= 500)
		{
			count += temp / 500;
			temp %= 500;
		}
		else if (temp >= 100)
		{
			count += temp / 100;
			temp %= 100;
		}
		else if (temp >= 50)
		{
			count += temp / 50;
			temp %= 50;
		}
		else if (temp >= 10)
		{
			count += temp / 10;
			temp %= 10;
		}
		else if (temp >= 5)
		{
			count += temp / 5;
			temp %= 5;
		}
		else if(temp>=1)
		{
			count += temp / 1;
			temp %= 1;
		}
	}

	cout << count;

	return 0;
}
