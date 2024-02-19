//
// Created by Foysal Munsy on 19 / 02 / 2024
// Time: 22 : 07 : 39
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
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll ans = 0, x, y;
    ll d = (1LL << 31) - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y = d ^ x;
        if (mp[x] == 0)
        {
            ans++;
            mp[y]++;
        }
        else
        {
            mp[x]--;
        }
    }
    cout << ans << nl;
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