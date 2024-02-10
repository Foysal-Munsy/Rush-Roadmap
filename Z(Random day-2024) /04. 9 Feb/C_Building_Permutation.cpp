//
// Created by Foysal Munsy on 09 / 02 / 2024
// Time: 21 : 17 : 08
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
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            // cout << abs((i + 1) - a[i]) << '\n';
            // cout << a[i] << " " << i << '\n';
            cnt += abs((i + 1) - a[i]);
        }
    }
    cout << cnt << '\n';
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