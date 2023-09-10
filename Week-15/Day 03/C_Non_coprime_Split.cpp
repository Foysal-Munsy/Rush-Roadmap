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
    ll L, R;
    cin >> L >> R;
    ll X = R / 2;
    if (2 * X >= L and X != 1)
    {
        cout << X << " " << X << '\n';
        return;
    }
    for (ll i = 2; i <= sqrtl(R); i++)
    {
        if (R % i == 0 and gcd(i, R - i) != 1)
        {
            cout << i << " " << R - i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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