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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == curr)
        {
            cnt1++, l++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }
        while (r < m && b[r] == curr)
        {
            cnt2++, r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << nl;
    return 0;
}
