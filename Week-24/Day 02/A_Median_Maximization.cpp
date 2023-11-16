//
// Created by Foysal Munsy on 11 / 11 / 2023
// Time: 22 : 16 : 42
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

void solve()
{
    int N, S;
    cin >> N >> S;
    N = N / 2 + 1;
    cout << S / N << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
    return 0;
}