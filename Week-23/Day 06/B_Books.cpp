//
// Created by Foysal Munsy on 08 / 11 / 2023
// Time: 22 : 35 : 07
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    ll n, t, ans = 0, sum = 0, start = 0;
    cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum > t)
        {
            sum -= a[start];
            start++;
        }
        ans = max(ans, i - start + 1);
        debug(ans);
    }
    cout << ans << nl;
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