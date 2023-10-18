/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/17         *
 *    Time: 20:10:20           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    // shovel = 2 sticks + 1 diamond
    // sword = 1 stick + 2 diamond
    ll stick, diamond;
    cin >> stick >> diamond;
    ll track = min(stick, diamond);
    ll ans = min(track, (stick + diamond) / 3);
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