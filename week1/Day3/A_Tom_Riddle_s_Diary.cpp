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
    set<string> st;
    while (t--)
    {
        string str;
        cin >> str;
        if (st.find(str) == st.end())
        {
            cout << "NO" << nl;
            st.insert(str);
        }
        else
        {
            cout << "YES" << nl;
        }
    }
    return 0;
}