#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K, idx = 0;
	cin >> N >> K;

	vector<int> q, r;

	for (int i = 0; i < N; i++)
		q.push_back(i + 1);

	while (q.size()!=0)
	{
		idx = (idx + K - 1) % q.size();
		r.push_back(q[idx]);
		q.erase(q.begin() + idx);
	}

	cout << "<" << r[0];
	for (unsigned long int i = 1; i < r.size(); i++)
	{
		cout << ", ";
		cout << r[i];
	}
	cout << ">";

	return 0;
}
