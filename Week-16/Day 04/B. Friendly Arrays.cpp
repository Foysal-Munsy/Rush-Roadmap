/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/18         *
 *    Time: 21:18:07           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    ll min_val = INT_MAX, max_val = INT_MIN;
    for (ll j = 0; j < m; j++)
    {
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            x ^= (a[i] | b[j]);
        }
        min_val = min(min_val, x);
        max_val = max(max_val, x);
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x ^= a[i];
    }
    min_val = min(min_val, x);

    cout << min_val << " " << max_val << nl;
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