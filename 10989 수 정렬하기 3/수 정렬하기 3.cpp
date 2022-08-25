#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, temp;
	cin >> N;
	
	int count[10000] = {};
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		count[temp - 1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
				cout << i + 1 << "\n";
		}
	}

	return 0;
}
