//
// Created by Foysal Munsy on 12 / 11 / 2023
// Time: 19 : 56 : 09
//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (size_t i = 0; i < n; ++i)
        cin >> a[i];
    for (size_t i = 0; i < m; ++i)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long mx = a[n - 1], mn = a[0], count = 0;

    for (size_t i = 0; i < n; ++i)
    {
        count += abs(a[i] - mx);
        if (mx == a[i])
            break;
    }
    bool flag = true;
    for (size_t i = 0; i < m; ++i)
    {
        count += abs(b[i] - mx);
        if (mx > b[i])
            break;
        if (mn < b[i])
            flag = false;
    }
    // cout << count << '\n';
    cout << (flag ? 0 : count) << '\n';
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