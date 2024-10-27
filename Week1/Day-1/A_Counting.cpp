#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << "0" << nl;
    }
    else
    {
        cout << (b + 1) - a << nl;
    }
    return 0;
}