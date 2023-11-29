//
// Created by Foysal Munsy on 29 / 11 / 2023
// Time: 20 : 39 : 04
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
    long long x, n, need = 0;
    cin >> x >> n;
    // long long need = n / 100;
    while (n > 0)
    {
        n -= 100;
        need++;
    }
    debug(need);

    cout << (x > need ? 0 : abs(need - x)) << '\n';
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