#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    set<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        st.insert(str[i]);
    }
    vector<char> v;
    for (char i = 'a'; i <= 'z'; i++)
    {
        v.push_back(i);
    }
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (st.find(v[i]) == st.end())
        {
            cout << v[i];
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "None" << nl;

    return 0;
}