//
// Created by Foysal Munsy on 07 / 11 / 2023
// Time: 13 : 17 : 03
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
size_t sum(size_t n)
{
    size_t s = 0;
    for (; n > 0;)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void solve()
{
    size_t n, s;
    cin >> n >> s;
    size_t lo = 1, hi = n;
    while (lo < hi)
    {
        size_t mid = lo + (hi - lo) / 2;
        if (mid - sum(mid) >= s)
            hi = mid;
        else
            lo = mid + 1;
    }
    size_t pos = lo, cnt = n - pos;
    (pos - sum(pos) < s ? cnt = 0 : ++cnt);
    // cnt++;
    debug(pos, cnt);
    cout << cnt << nl;
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