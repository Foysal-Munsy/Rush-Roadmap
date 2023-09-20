/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/20         *
 *    Time: 22:18:16           *
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
    vector<ll> v, pref;
    ll sum = 0;
    pref.push_back(sum);
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        sum += x;
        pref.push_back(sum);
    }
    if (pref[n] < m)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        cout << (pref[n] - m) + 1 << nl;
    }
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