//
// Created by Foysal Munsy on 13 / 02 / 2024
// Time: 20 : 14 : 32
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
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int sum = a + b + c;
    if (n >= 3 && sum >= n && a > 0 && b > 0 && c > 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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