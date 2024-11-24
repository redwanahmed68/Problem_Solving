// Created on 2024-11-24
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
    ll a, b;
    cin >> a >> b;
    vector<ll> v(a);
    vector<ll> v2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }
    vector<int> ans;
    int l = 0, r = 0;
    int cnt = 0;
    while (r < b)
    {
        if (l < a && v[l] < v2[r])
        {
            cnt++;
            l++;
        }
        else
        {
            ans.push_back(cnt);
            r++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;

    return 0;
}