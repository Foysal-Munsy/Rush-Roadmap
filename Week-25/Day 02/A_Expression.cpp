//
// Created by Foysal Munsy on 18 / 11 / 2023
// Time: 21 : 28 : 26
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
    int a, b, c;
    cin >> a >> b >> c;
    int ans_1 = a + b + c, ans_2 = a * b * c, ans_3 = (a + b) * c, ans_4 = a * (b + c);
    int ans = max(max(ans_1, ans_2), max(ans_3, ans_4));
    cout << ans << '\n';
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