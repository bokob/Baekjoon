#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> A, B;
	vector<int>::iterator iter;
	
	int numA, numB, temp;
	cin >> numA >> numB;
	vector<int> C(numA + numB);

	for (int i = 0; i < numA; i++)
	{
		cin >> temp;
		A.push_back(temp);
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < numB; i++)
	{
		cin >> temp;
		B.push_back(temp);
	}
	sort(B.begin(), B.end());
	
	iter = set_symmetric_difference(A.begin(), A.begin() + numA, B.begin(), B.begin() + numB, C.begin());
	C.resize(iter - C.begin());
	cout << C.size();

	return 0;
}
