#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Knapsack(int items, int capacity, vector<int> weight, vector<int> values)
{
	vector<vector<int>> DP(items + 1, vector<int>(capacity + 1, 0));

	for (int i = 1; i <= items; i++)
	{
		int currentWeight = weight[i - 1];
		int currentValue = values[i - 1];

		for (int totalWeight = 1; totalWeight <= capacity; totalWeight++)
		{
			if (totalWeight < currentWeight)
				DP[i][totalWeight] = DP[i - 1][totalWeight];
			else
				DP[i][totalWeight] = max(DP[i - 1][totalWeight], DP[i - 1][totalWeight - currentWeight] + currentValue);
		}
	}

	return DP[items][capacity];
}


int main()
{
	int N, K, W, V;
	cin >> N >> K;

	vector<int>weight, value;
	for (int i = 0; i < N; i++)
	{
		cin >> W >> V;
		weight.push_back(W);
		value.push_back(V);
	}

	int result = Knapsack(N, K, weight, value);

	cout << result;

	return 0;
}
