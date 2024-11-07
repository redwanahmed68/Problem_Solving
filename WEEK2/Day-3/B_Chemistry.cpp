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
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        unordered_map<char, int> mp;
        for (char x : str)
            mp[x]++;

        int odd_cnt = 0;
        for (auto [ch, freq] : mp)
            if (freq % 2 != 0)
                odd_cnt++;

        if (odd_cnt - 1 < 0)
        {
            odd_cnt = 0;
        }
        else
        {
            odd_cnt--;
        }
        if (odd_cnt <= k && k <= n)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
