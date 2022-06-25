#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	int count;					// 약수 개수
	cin >> count;				
	cin.ignore();				// 버퍼 비우기

	string s;					// 약수들 입력받을 string
	getline(cin, s);			// 약수들 입력
	
	vector<int> ary;
	istringstream ss(s);
	string stringBuffer;
	vector<string> v;

	v.clear();

	while (getline(ss, stringBuffer, ' '))	
	{
		v.push_back(stringBuffer);
	}

	for (int i = 0; i < v.size(); i++)
	{
		ary.push_back(stoi(v[i]));
	}

	sort(ary.begin(), ary.end());

	if (count == 1)
	{
		cout << ary[0] * ary[0];
	}
	else
	{
		cout << ary[0] * ary[v.size() - 1];
	}
	return 0;
}
