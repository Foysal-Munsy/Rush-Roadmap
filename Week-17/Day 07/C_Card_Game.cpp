/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/28         *
 *    Time: 21:59:46           *
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
    vector<ll> v, suff(n + 1);
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    ll zero = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + max(zero, v[i]);
    }
    // for (auto i : suff)
    //     cout << i << " ";
    // cout << nl;
    // cout << suff[0 + 1];

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            ans = max(ans, suff[i + 1]);
        }
        else
        {
            ans = max(ans, suff[i + 1] + v[i]);
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