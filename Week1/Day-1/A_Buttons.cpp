#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 1; i <= 2; i++)
    {
        if (a > b)
        {
            ans += a;
            a--;
        }
        else if (a < b)
        {
            ans += b;
            b--;
        }
        else
        {
            ans += a;
            a--;
        }
    }
    cout << ans << nl;
    return 0;
}