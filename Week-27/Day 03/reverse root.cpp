//
// Created by Foysal Munsy on 03 / 12 / 2023
// Time: 07 : 34 : 02
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
const int N = 2e5 + 5;

void solve()
{
    vector<double> v;
    double n;

    for (; cin >> n;)
        v.push_back(n);

    for (int i = v.size() - 1; i >= 0; i--)
        cout << setprecision(4) << fixed << sqrt(v[i]) << '\n';
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