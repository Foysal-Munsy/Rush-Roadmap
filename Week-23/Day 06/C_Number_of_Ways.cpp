//
// Created by Foysal Munsy on 08 / 11 / 2023
// Time: 23 : 27 : 26
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
    ll n, tot = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }

    if (tot % 3 != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll a_sum = tot / 3;
    ll sum = 0, cnt = 0, ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        sum += a[i];
        if (sum == 2 * a_sum)
            ans += cnt;
        if (sum == a_sum)
            cnt++;
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