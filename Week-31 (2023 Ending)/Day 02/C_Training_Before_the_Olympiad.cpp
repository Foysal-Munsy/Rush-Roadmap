//
// Created by Foysal Munsy on 30 / 12 / 2023
// Time: 22 : 12 : 34
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
    ll s = 0, odd_cnt = 0, evn_cnt = 0, rem = 0;
    vector<ll> b(n, 0ll);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        s += x;
        if (x & 1)
            ++odd_cnt;
        else
            ++evn_cnt;
        rem = odd_cnt / 3;
        if (evn_cnt == 0 && odd_cnt == 1)
            rem == 0;
        else if (odd_cnt % 3 == 1)
            rem = (odd_cnt + 2) / 3;
        b[i] = (s - rem);
    }
    for (auto &i : b)
        cout << i << " ";
    cout << nl;
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