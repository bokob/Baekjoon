#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L;
    cin >> L;
    cin.ignore();

    string s;
    getline(cin, s);

    long long H = 0, r = 1, M = 1234567891;
    for (int i = 0; i < L; i++) 
    {
        H = (H + (s[i] - 'a' + 1) * r) % M;
        r = r * 31 % M;
    }
    cout << H;
    return 0;
}
