//
// Created by Foysal Munsy on 06 / 02 / 2024
// Time: 22 : 16 : 38
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
    ll n, q;
    cin >> n;
    vector<ll> a(n), nxt_diff_idx(n);
    for (auto &i : a)
        cin >> i;
    nxt_diff_idx[n - 1] = n;
    debug(nxt_diff_idx);
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] == a[i + 1])
            nxt_diff_idx[i] = nxt_diff_idx[i + 1];
        else
            nxt_diff_idx[i] = i + 1;
    }
    cin >> q;
    for (; q--;)
    {
        ll l, r;
        cin >> l >> r;
        --l, --r;
        if (nxt_diff_idx[l] > r)
            cout << "-1 -1\n";
        else
            cout << l + 1 << " " << nxt_diff_idx[l] + 1 << "\n";
    }
    debug(nxt_diff_idx);
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