// Problem link:https://www.codechef.com/problems/CHOLY

// Created on 2024-11-10
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
    int a, b, c;
    cin >> a >> b >> c;
    float team_A = a * 1;
    float team_B = c * 1;
    team_A += b * 0.5;
    team_B += b * 0.5;
    int ans = 4 - (a + b + c);
    team_A += ans * 1;
    if (team_A > team_B)
    {
        cout << "Yes" << nl;
    }
    else
    {
        cout << "No" << nl;
    }

    return 0;
}