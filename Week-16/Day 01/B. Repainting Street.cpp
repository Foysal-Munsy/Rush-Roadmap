/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/15         *
 *    Time: 23:45:42           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    ll ans = 1e5;
    for (auto it : s)
    {
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != it)
            {
                cnt++;
                i += k;
                i--;
            }
        }
        ans = min(ans, cnt);
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