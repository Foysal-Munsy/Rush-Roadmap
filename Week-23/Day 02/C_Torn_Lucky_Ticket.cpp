//
// Created by Foysal Munsy on 04 / 11 / 2023
// Time: 21 : 40 : 19
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
    int x, y, k;
    cin >> x >> y >> k;
    if (y <= x)
        cout << x << "\n";
    else if (x + k >= y)
        cout << y << "\n";
    else
        cout << y + (y - (x + k)) << "\n";
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