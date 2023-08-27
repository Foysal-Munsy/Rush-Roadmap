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
    int n;
    cin >> n;
    string s;
    cin >> s;
    // regular bracket count;
    // regular bracket count ja thakbe seta n/2 theke minus korlei desired ans paoa jabe
    stack<char> st;
    int count = 0;
    for (char c : s)
    {
        if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
                count++;
            }
        }
    }
    int ans = (n / 2) - count;
    cout << ans << nl;
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