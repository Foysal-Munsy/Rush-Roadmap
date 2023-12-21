//
// Created by Foysal Munsy on 20 / 12 / 2023
// Time: 22 : 06 : 24
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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    bool flag = false;
    for (auto &i : a)
    {
        cin >> i;
        if (i % x != 0)
            flag = true;
    }
    ll ans = accumulate(all(a), 0LL);
    if (ans % x != 0)
    {
        cout << n << '\n';
        return;
    }
    if (!flag)
    {
        cout << -1 << '\n';
        return;
    }
    // ll sum = 0, maxi = 0, cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cnt++;
    //     sum += a[i];
    //     if (sum % x != 0)
    //         maxi = max(maxi, cnt);
    // }
    // cout << maxi << '\n';
    // ll i = 0, j = 0, cnt = 0, sum = 0, maxi = 0;
    // while (i < n and j < n)
    // {
    //     sum += a[i];
    //     if (sum % x != 0)
    //     {
    //         cnt++;
    //         i++;
    //     }
    //     sum = 0;
    //     j++;
    //     i = j;
    //     maxi = max(maxi, cnt);
    // }
    // cout << (maxi > 0 ? maxi : -1) << '\n';
    ll l = 0, r = n - 1;
    while (a[l] % x == 0)
        l++;
    while (a[r] % x == 0)
        r--;

    cout << max(n - l - 1, r) << '\n';
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