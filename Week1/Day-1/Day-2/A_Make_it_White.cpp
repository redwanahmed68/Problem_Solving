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
        string str;
        cin >> str;
        vector<int> v;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B')
            {
                v.push_back(i);
            }
        }
        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());
        cout << (mx + 1) - mn << nl;
    }
}