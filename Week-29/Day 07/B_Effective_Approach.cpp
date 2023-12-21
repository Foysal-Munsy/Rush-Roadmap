//
// Created by Foysal Munsy on 21 / 12 / 2023
// Time: 16 : 44 : 12
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
    vector<ll> a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x] = i + 1;
        debug(a);
    }

    ll m, s_v = 0, s_p = 0;
    cin >> m;
    for (; m--;)
    {
        ll val;
        cin >> val;
        s_v += a[val];
        s_p += (n - a[val] + 1);
    }
    cout << s_v << " " << s_p << '\n';
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