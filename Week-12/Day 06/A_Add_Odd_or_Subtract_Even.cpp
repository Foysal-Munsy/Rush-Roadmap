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
    ll a, b;
    cin >> a >> b;
    // target a ke b banaite hobe
    //  a+anyOdd == b or a-anyEven==b
    // minimum moves?
    if (a == b)
        cout << 0 << nl;
    else
    {
        if (a > b)
        {
            cout << (a + b) % 2 + 1 << nl;
        }
        else
        {
            cout << -((a + b) % 2) + 2 << nl;
        }
    }
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