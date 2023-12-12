//
// Created by Foysal Munsy on 11 / 12 / 2023
// Time: 11 : 03 : 41
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
    int n;
    cin >> n;
    int s = n + n, k, x;
    k = x = 0;

    for (int i = 0; i <= n + n; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << " ";
        if (i > 0)
        {
            if (x > 0)
                for (int j = 0; j <= x; j++)
                    cout << j << " ";
            for (int j = x - 1; j > 0; j--)
                cout << j << " ";
        }
        cout << 0 << '\n';
        if (i >= n)
            s += 2, x--;
        else
            s -= 2, x++;
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