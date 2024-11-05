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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string str = "Timru";
        sort(v.begin(), v.end());
        int flag = 1;
        if (v.size() != 5)
        {
            flag = 0;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] != str[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
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