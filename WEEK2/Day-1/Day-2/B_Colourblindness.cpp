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
        string str1, str2;
        cin >> str1 >> str2;
        int flag = 1;
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] != str2[i])
            {
                if ((str1[i] == 'G' && str2[i] != 'B'))
                {
                    flag = 0;
                    break;
                }
                else if ((str1[i] == 'R' && str2[i] != 'R'))
                {
                    flag = 0;
                    break;
                }
                else if ((str1[i] == 'B' && str2[i] != 'B' && str2[i] != 'G'))
 
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