//
// Created by Foysal Munsy on 13 / 12 / 2023
// Time: 19 : 36 : 44
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
    int x[2], y[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> x[i] >> y[i];
    }

    if (x[0] == x[1])
    {
        int side = abs(y[0] - y[1]);
        cout << x[0] + side << " " << y[0] << " " << x[1] + side << " " << y[1] << '\n';
    }
    else if (y[0] == y[1])
    {
        int side = abs(x[0] - x[1]);
        cout << x[0] << " " << y[0] + side << " " << x[1] << " " << y[1] + side << '\n';
    }
    else if (abs(x[0] - x[1]) == abs(y[0] - y[1]))
    {
        cout << x[0] << " " << y[1] << " " << x[1] << " " << y[0] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
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