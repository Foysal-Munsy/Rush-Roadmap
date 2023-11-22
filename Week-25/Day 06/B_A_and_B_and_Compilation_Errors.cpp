//
// Created by Foysal Munsy on 22 / 11 / 2023
// Time: 20 : 02 : 07
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
    long long n, aa = 0, bb = 0, cc = 0;
    cin >> n;
    vector<int> a(n), b(n - 1), c(n - 2);
    for (auto &i : a)
    {
        cin >> i;
        aa += i;
    }
    for (auto &i : b)
    {
        cin >> i;
        bb += i;
    }
    for (auto &i : c)
    {
        cin >> i;
        cc += i;
    }
    cout << aa - bb << '\n'
         << bb - cc << '\n';
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