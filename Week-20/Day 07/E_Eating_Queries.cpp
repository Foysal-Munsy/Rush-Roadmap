/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/19         *
 *    Time: 21:24:26           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, q, sum = 0, s = 0;
    cin >> n >> q;
    vector<ll> v;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<ll>());
    vector<ll> pref(n, 0);
    for (ll i = 0; i < n; i++)
    {
        s += v[i];
        pref[i] = s;
    }

    for (; q--;)
    {
        ll x;
        cin >> x;
        if (x == sum)
            cout << n << nl;
        else if (x > sum)
            cout << -1 << nl;
        else
        {
            // operation
            auto lb = lower_bound(pref.begin(), pref.end(), x);
            ll min_length = lb - pref.begin();
            cout << min_length + 1 << nl;
            // +1 for 0 based..
        }
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