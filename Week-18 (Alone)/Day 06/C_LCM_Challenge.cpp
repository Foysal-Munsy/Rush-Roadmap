/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/04         *
 *    Time: 20:50:15           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    // base case
    if (n <= 2)
        ans = n;
    else if (n % 2)
        ans = n * (n - 1) * (n - 2);
    else if (n % 3)
        ans = n * (n - 1) * (n - 3);
    else
        ans = (n - 1) * (n - 2) * (n - 3);

    cout << ans << nl;
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