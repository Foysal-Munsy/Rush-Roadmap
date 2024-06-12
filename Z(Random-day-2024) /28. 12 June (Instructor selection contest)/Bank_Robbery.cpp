//
// Created by Foysal Munsy on 12 / 06 / 2024
// Time: 21 : 49 : 09
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
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll jog = max(0ll, a[0]), bad = 0;

    for (int i = 1; i < n; i++)
    {
        ll abar = max(bad, jog);
        jog = bad + a[i];
        bad = abar;
    }
    // ll sum = 0;
    //     for (ll i = 0; i < n; i++)
    //     {
    //         if (a[i] != -1)
    //         {
    //             sum += a[i];
    //         }
    //     }
    //     cout << sum << nl;
    cout << max(jog, bad) << nl;

    debug(a);
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}