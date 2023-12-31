//
// Created by Foysal Munsy on 20 / 12 / 2023
// Time: 17 : 14 : 08
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
const int N = 2e5 + 5;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), alice, bob;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    vector<pair<ll, ll>> track(n);
    for (ll i = 0; i < n; i++)
        track[i] = {a[i] + b[i], i};
    sort(all(track));
    debug(track);
    ll res = 0, idx = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll point = track[i].second;
        if (!(idx & 1))
            alice.push_back(a[point] - 1);

        else
            bob.push_back(b[point] - 1);
        debug(alice, bob);
        idx++;
    }
    for (auto &i : alice)
        res += i;
    for (auto &i : bob)
        res -= i;
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