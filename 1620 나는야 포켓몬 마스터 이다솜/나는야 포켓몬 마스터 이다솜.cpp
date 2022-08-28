#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	cin.ignore();

	string input;
	
	map <string, string> book;
	
	for (int i = 0; i < N; i++)
	{
		getline(cin, input);	
		book.insert({ input, to_string(i + 1) });
		book.insert({ to_string(i + 1) ,input });
	}
	for (int i = 0; i < M; i++)
	{
		getline(cin, input);
		cout << book[input] << "\n";
	}

	return 0;
}
