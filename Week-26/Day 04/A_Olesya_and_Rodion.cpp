//
// Created by Foysal Munsy on 27 / 11 / 2023
// Time: 21 : 15 : 37
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
    int n, t;
    cin >> n >> t;
    if (t == 10)
    {
        // two cases
        if (n == 1)
            cout << "-1\n";
        else
        {
            cout << 1;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 0;
            }
        }
    }
    else // t<10
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
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