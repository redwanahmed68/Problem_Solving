
#include <bits/stdc++.h>
using namespace std;
#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define nl '\n'
#define ll long long int
int main()
{
    fastio();
    int n;
    cin >> n;
    ll sum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if (sum % 2 == 0)
    {
        cout << sum << nl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ll flag = sum - v[i];
            if (flag % 2 == 0)
            {
                cout << flag << endl;
                break;
            }
        }
    }

    return 0;
}
