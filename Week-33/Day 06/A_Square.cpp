//
// Created by Foysal Munsy on 17 / 01 / 2024
// Time: 22 : 50 : 00
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
    int X[4], Y[4];
    for (int i = 0; i < 4; i++)
        cin >> X[i] >> Y[i];
    sort(X, X + 4);
    sort(Y, Y + 4);
    cout << (X[3] - X[0]) * (Y[3] - Y[0]) << "\n";
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