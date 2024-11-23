// Created on 2024-11-23
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int l = 0, r = n - 1;
        int ans = n;
        while (l <= r)
        {
            if (str[l] == str[r])
            {
                break;
            }
            else
            {
                ans -= 2;
                l++;
                r--;
            }
        }
        cout << ans << nl;
    }
    return 0;
}