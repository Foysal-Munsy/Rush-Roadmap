/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/18         *
 *    Time: 22:08:52           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    if (x == y)
    {
        cout << x + y << nl;
        return;
    }
    ll sum = 0;

    for (; k--;)
    {
        if (x == y)
        {
            break;
        }
        if (x > y)
        {
            x = gcd(x, y);
            if (x > y)
                x = lcm(x, y);
            else
                y = lcm(x, y);
        }
        else
        {
            y = gcd(x, y);
            if (x > y)
                x = lcm(x, y);
            else
                y = lcm(x, y);
        }
    }
    cout << x + y << nl;
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