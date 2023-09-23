/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/23         *
 *    Time: 22:39:48           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

ll w, h, n;
bool good(ll x)
{
    return (x / w) * (x / h) >= n;
}
void solve()
{
    cin >> w >> h >> n;
    ll l = 0, r = 1;

    while (!good(r))
        r *= 2;

    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (good(m))
            r = m;
        else
            l = m;
    }
    cout << r << '\n';
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