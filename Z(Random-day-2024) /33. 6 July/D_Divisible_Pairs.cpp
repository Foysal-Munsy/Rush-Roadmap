//
// Created by Foysal Munsy on 06 / 07 / 2024
// Time: 17 : 37 : 15
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    ll n, x, y, ans = 0;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll rule_1 = a[i] % x;
        ll rule_2 = a[i] % y;
        debug(rule_1, rule_2);
        ans += mp[{(x - rule_1) % x, rule_2}];
        debug(ans);
        mp[{rule_1, rule_2}]++;
    }
    // debug(mp);
    cout << ans << '\n';
    // for (const auto &entry : mp)
    // {
    //     cout << "Pair (" << entry.first.first << ", " << entry.first.second << ") has frequency " << entry.second << '\n';
    // }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
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