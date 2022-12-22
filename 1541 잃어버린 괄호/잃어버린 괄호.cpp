#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, num;
    getline(cin,s);

    int result = 0;
    bool isMinus = false;

    for (int i = 0; i <= s.size(); i++) {

        if (s[i] == '-' || s[i] == '+' || i == s.size()) 
        {
            if (isMinus) 
            {
                result -= stoi(num);
                num = "";
            }
            else 
            {
                result += stoi(num);
                num = "";
            }
        }
        else 
            num += s[i];

        if (s[i] == '-')
            isMinus = true;
    }
    cout << result;
}
