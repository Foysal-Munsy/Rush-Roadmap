/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/19         *
 *    Time: 13:26:59           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, m, OR = 0;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll j = 0; j < m; j++)
    {
        cin >> b[j];
        OR |= b[j];
    }
    // for (auto i : b)
    //     cout << i << " ";
    // cout << OR << nl;
    ll mn = 0, mx = 0;
    for (ll i = 0; i < n; i++)
    {
        mn ^= a[i];
        mx ^= (a[i] | OR);
        // cout << mn << "," << mx << nl;

        // cout << min(mx, mn) << " " << max(mx, mn) << '\n';
    }
    cout << min(mx, mn) << " " << max(mx, mn) << '\n';
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