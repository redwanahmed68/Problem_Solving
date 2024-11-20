#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int maximum = max(x, y);
        int res = maximum % 3;
        cout << res << endl;
    }
    return 0;
}