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
    if (n & 1)
    {
        int ans = n / 2;
        cout << ans << nl;
        ans -= 1;
        while (ans--)
        {
            cout << 2 << " ";
        }
        cout << 3 << nl;
    }
    else
    {
        int ans = n / 2;
        cout << ans << nl;
        while (ans--)
        {
            cout << 2 << " ";
        }
        cout << nl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}