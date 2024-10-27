#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
int main()
{
    string str;
    cin >> str;
    int len = str.size();
    if (len < 4)
    {
        string ans = "";
        for (int i = 0; i < 4 - len; i++)
        {
            ans += '0';
        }
        string res = ans + str;
        cout << res << nl;
    }
    else
    {
        cout << str << nl;
    }
    return 0;
}