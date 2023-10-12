/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/06         *
 *    Time: 22:06:08           *
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
    map<ll, ll> mp;
    vector<pair<ll, ll>> vp;
    vector<ll> v;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        v.push_back(x);
    }
    if (mp.size() == 1)
    {
        cout << "NO\n";
    }
    else
    {
        ll track = 0;
        for (ll i = 1; i < n; i++)
        {
            if (v[0] != v[i])
            {

                track = i;
            }
        }
        for (ll i = 1; i < n; i++)
        {
            if (v[0] != v[i])
            {
                vp.push_back({1, i + 1});
            }
            else
            {
                vp.push_back({track + 1, i + 1});
            }
        }

        cout << "YES\n";
        for (auto [i, v] : vp)
        {
            cout << i << " " << v << nl;
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