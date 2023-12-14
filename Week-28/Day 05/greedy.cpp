//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 19 : 34 : 53
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a), greater<ll>());
    ll cost = 0;
    for (ll i = 0; i < n; i++)
    {
        ll bought_cnt = i / k;
        ll brack = bought_cnt + 1;
        ll cost_more = brack * a[i];
        cost += cost_more;
    }
    a.clear();
    cout << cost << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}