//
// Created by Foysal Munsy on 18 / 11 / 2023
// Time: 22 : 03 : 31
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int tk_lagbe = 0;
    if (m * a <= b)
    {
        tk_lagbe = n * a;
    }
    else
    {
        int x = n / m;
        tk_lagbe = x * b;
        if ((n - m * x) * a <= b)
        {
            tk_lagbe += (n - m * x) * a;
        }
        else
        {
            tk_lagbe += b;
        }
    }
    cout << tk_lagbe << '\n';
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