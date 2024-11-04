#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define nl '\n'
#define ll long long int
int main()
{
    // int cs = 0;
    // cout << "Case " << ++cs << ": ";
    fastio();
    string str1, str2;
    cin >> str1 >> str2;
    int cnt = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] != str2[i])
        {
            cnt++;
        }
    }
    cout << cnt;
}