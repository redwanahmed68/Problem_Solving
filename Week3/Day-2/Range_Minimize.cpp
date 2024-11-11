// Created on 2024-11-11
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int posibility1 = v[n - 3] - v[0];
        int posibility2 = v[n - 2] - v[1];
        int posibility3 = v[n - 1] - v[2];
        int ans = min(posibility1, posibility2);
        int res = min(ans, posibility3);
        cout << res << nl;
    }

    return 0;
}