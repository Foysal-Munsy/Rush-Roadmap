//
// Created by Foysal Munsy on 18 / 11 / 2023
// Time: 21 : 01 : 07
//
#include <bits/stdc++.h>
using namespace std;
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
    vector<int> a(m);
    for (auto &i : a)
        cin >> i;
    long long step = abs(1 - a[0]);
    for (int i = 0; i < m - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            long long diff = a[i + 1] - a[i];
            step += diff;
        }
        else if (a[i] > a[i + 1])
        {
            long long diff = abs(n - a[i]);
            step += diff;
            step += a[i + 1];
        }
    }
    cout << step << '\n';
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