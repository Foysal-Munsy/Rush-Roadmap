//
// Created by Foysal Munsy on 09 / 12 / 2023
// Time: 08 : 40 : 36
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

void solve()
{
    int a, b;
    cin >> a >> b;
    int cur_a = a, cur_b = 0, hours = 0;

    while (cur_a > 0)
    {
        hours += cur_a;
        cur_b += cur_a;
        cur_a = cur_b / b;
        cur_b %= b;
    }
    cout << hours << '\n';
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