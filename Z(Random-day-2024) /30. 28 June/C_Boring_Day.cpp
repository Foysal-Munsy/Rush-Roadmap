//
// Created by Foysal Munsy on 28 / 06 / 2024
// Time: 15 : 59 : 22
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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, mx = 0, j = 0;
    debug(a);
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum > r)
        {
            sum -= a[j];
            j++;
        }
        if (sum >= l && sum <= r)
        {
            mx++;
            sum = 0;
            j = i + 1;
        }
        debug(sum, mx);
    }

    cout << mx << '\n';
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