/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto c : s)
    {
        if (!st.empty() and (c == 'B' and (st.top() == 'B' or st.top() == 'A')))
            st.pop();
        else
            st.push(c);
    }
    cout << st.size() << '\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}