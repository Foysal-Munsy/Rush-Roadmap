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
    int x;
    cin >> x;
    string ans = "";
    int temp = 9;
    if (x > 45)
    {
        cout << -1 << nl;
        return;
    }
    // if (x <= 9)
    // {
    //     cout << x << nl;
    //     return;
    // }
    for (int i = 9; i >= 1; i--)
    {
        if (x >= i)
        {
            ans = to_string(i) + ans;
            x -= i;
        }
    }
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