#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	stack<char> st;

	for (int i = 0; i < s.size(); i++)
	{
		if (st.size() == 0)
		{
			st.push(s[i]);
		}
		else
		{
			if (st.top() == '(' && s[i] == ')')
				st.pop();
			else if (st.top() == '(' && s[i] != ')')
				st.push(s[i]);
			else if (st.top() == ')')
				st.push(s[i]);
		}
	}

	cout << st.size();

	return 0;
}
