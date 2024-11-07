// Created on 2024-11-07
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string str;
            cin >> str;
            for (char ch : str)
            {
                if (ch == 'D')
                {
                    v[i]++;
                    if (v[i] == 10)
                    {
                        v[i] = 0;
                    }
                }
                else if (ch == 'U')
                {
                    v[i]--;
                    if (v[i] == -1)
                    {
                        v[i] = 9;
                    }
                }
            }
            cout << v[i] << " ";
        }
        cout << nl;
    }

    return 0;
}