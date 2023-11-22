//
// Created by Foysal Munsy on 22 / 11 / 2023
// Time: 19 : 31 : 31
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

    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << '\n';
    }
    else
    {
        if (n % 4 == 0)
            cout << 6 << '\n';
        else if (n % 4 == 1)
            cout << 8 << '\n';
        else if (n % 4 == 2)
            cout << 4 << '\n';
        else
            cout << 2 << '\n';
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