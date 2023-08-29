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
    ll n;
    cin >> n;
    bool flg = true;

    unordered_map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        mp[input]++;
    }
    for (auto [i, v] : mp)
    {
        if (v > 1)
            flg = false;
    }
    if (flg == false)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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