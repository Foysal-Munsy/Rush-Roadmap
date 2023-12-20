//
// Created by Foysal Munsy on 19 / 12 / 2023
// Time: 23 : 01 : 59
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll &x : a)
        cin >> x;
    for (ll &x : b)
        cin >> x;
    vector<pair<ll, ll>> track(n);
    for (ll i = 0; i < n; i++)
        track[i] = {a[i] + b[i], i};
    sort(all(track));
    ll res = 0, op = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (op % 2 == 0)
            res += a[track[i].second] - 1;
        else
            res -= b[track[i].second] - 1;
        op++;
    }
    cout << res << '\n';
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