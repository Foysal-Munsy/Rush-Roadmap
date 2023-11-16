// How binary search works for this problem???
//  Created by Foysal Munsy on 13 / 11 / 2023
//  Time: 21 : 11 : 24
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
    int ans = 0;
    if (n <= k)
    {
        if (k % n != 0)
            ans = (k / n) + 1;
        else
            ans = (k / n);
    }
    else
    {
        if (n % k != 0)
            ans = 2;
        else
            ans = 1;
    }

    cout << ans << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    long long t = 1;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
    return 0;
}