//
// Created by Foysal Munsy on 16 / 11 / 2023
// Time: 19 : 57 : 00
//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(k);
    for (auto &i : a)
        cin >> i;
    sort(a.rbegin(), a.rend());
    long long sum = 0, track = 0;
    for (int i = 0; i < k and sum + n - a[i] < n; i++)
    {
        sum += n - a[i];
        track++;
    }
    cout << track << '\n';
    debug(a, track);
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    long long t;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
    return 0;
}