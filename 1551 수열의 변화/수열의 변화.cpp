#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<int> make_sequence(vector<int>& A)
{
	vector<int> temp;
	
	for (int i = 1; i < A.size(); i++)
		temp.push_back(A[i] - A[i - 1]);

	return temp;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	cin.ignore();

	string s;
	getline(cin, s);
	
	vector<int> A;

	istringstream ss(s);
	string string_buffer;
	while (getline(ss, string_buffer, ','))
		A.push_back(stoi(string_buffer));

	for (int i = 0; i < K; i++)
		A = make_sequence(A);

	for (int i = 0; i < A.size(); i++)
	{
		cout << A[i];
		if (i == A.size() - 1)
			break;
		cout << ",";
	}

	return 0;
}
