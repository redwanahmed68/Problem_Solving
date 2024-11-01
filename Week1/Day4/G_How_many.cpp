// Created on 2024-11-01
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
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            for (int k = 0; k <= a; k++)
            {
                if (i + j + k <= a && i * j * k <= b)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << nl;
    return 0;
}