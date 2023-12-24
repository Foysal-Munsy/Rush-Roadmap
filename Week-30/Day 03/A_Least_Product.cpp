//
// Created by Foysal Munsy on 24 / 12 / 2023
// Time: 20 : 42 : 41
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
    ll zero = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zero++;
        if (a[i] < 0)
            neg++;
    }
    if (zero > 0)
    {
        cout << 0 << nl;
        return;
    }
    if (neg & 1)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        cout << 1 << nl;
        cout << 1 << " " << 0 << nl;
    }
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