//
// Created by Foysal Munsy on 20 / 12 / 2023
// Time: 21 : 44 : 47
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
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != '-')
            {
                if (((i + j) & 1))
                {
                    arr[i][j] = 'W';
                }
                else
                {
                    arr[i][j] = 'B';
                }
            }
            else
                continue;
        }
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cout << arr[r][c];
        }
        cout << '\n';
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