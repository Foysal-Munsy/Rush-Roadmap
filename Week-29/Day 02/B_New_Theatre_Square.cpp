//
// Created by Foysal Munsy on 16 / 12 / 2023
// Time: 16 : 39 : 51
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
    int n, m, x, y, dot = 0;
    cin >> n >> m >> x >> y;
    char a[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
                ++dot;
        }
    }
    int ans = 0;
    if (x + x < y)
        ans = dot * x;
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (a[i][j] == a[i][j + 1] and a[i][j] == '.')
                {
                    a[i][j] = '!';
                    a[i][j + 1] = '!';
                    ans += y;
                }
            }
        }
        dot = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '.')
                {
                    ++dot;
                    a[i][j] = '&';
                }
            }
        }
        ans += (dot * x);
    }

    cout << ans << '\n';
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