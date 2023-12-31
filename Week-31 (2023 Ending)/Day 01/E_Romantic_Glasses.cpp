//
// Created by Foysal Munsy on 29 / 12 / 2023
// Time: 07 : 32 : 31
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
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i & 1)
            a[i] = -1 * x;
        else
            a[i] = x;
    }
    vector<ll> pref(n + 1, 0LL);
    partial_sum(all(a), pref.begin() + 1);
    map<ll, ll> mp;
    for (auto &i : pref)
        mp[i]++;
    bool ok = false;
    for (auto &i : mp)
    {
        if (i.second > 1)
        {
            ok = true;
            break;
        }
    }
    debug(pref);
    cout << (ok ? "YES\n" : "NO\n");
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