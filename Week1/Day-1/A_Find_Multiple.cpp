#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 1; i <= b - a + 1; i++)
    {
        int ans = 0;
        ans = c * i;
        if (ans >= a && ans <= b)
        {
            cout << ans;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "-1" << nl;
    }

    return 0;
}