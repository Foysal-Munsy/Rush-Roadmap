//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 21 : 39 : 11
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
    long long n, cnt = 0;
    cin >> n;
    vector<long long> a(n + 1);
    for (size_t i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (size_t i = n - 1; i; --i)
    {
        long long x = (a[i] + a[i + 1] - 1) / a[i + 1];
        cnt += x - 1, a[i] = a[i] / x;
    }
    cout << cnt << '\n';
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