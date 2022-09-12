#include <iostream>
#include <string>
using namespace std;

int cnt;

int recursion(string &s, int l, int r) 
{
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(string &s) 
{
    return recursion(s, 0, s.size() - 1);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    cin.ignore();

    string s;
    for (int i = 0; i < T; i++)
    {
        cnt = 0;
        getline(cin, s);
        cout << isPalindrome(s) << " " << cnt << "\n";
    }

    return 0;
}
