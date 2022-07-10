#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int N, x, y;
	cin >> N;

	int** person = new int* [N];
	
	for (int i = 0; i < N; i++)
	{
		person[i] = new int[2];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		person[i][0] = x;
		person[i][1] = y;
	}

	int* result = new int[N];

	for (int i = 0; i < N; i++)
	{
		int k = 0;
		for (int j = 0; j < N; j++)
		{
			if (person[i][0] < person[j][0] && person[i][1] < person[j][1])
			{
				k++;
			}
		}
		result[i] = k + 1;
	}

	for (int i = 0; i < N; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
