//
// Created by Foysal Munsy on 25 / 12 / 2023
// Time: 11 : 23 : 38
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    int area_a, area_b, area_c;
    cin >> area_a >> area_b >> area_c;

    int A, B, C;
    A = sqrt((area_a * area_c) / area_b);
    B = sqrt((area_a * area_b) / area_c);
    C = sqrt((area_b * area_c) / area_a);
    int sum = 4 * (A + B + C);
    cout << sum << '\n';
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