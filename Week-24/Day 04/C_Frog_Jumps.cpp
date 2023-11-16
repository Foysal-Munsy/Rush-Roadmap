//
// Created by Foysal Munsy on 13 / 11 / 2023
// Time: 22 : 50 : 34
//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int pos = -1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            ans = max(ans, i - pos);
            pos = i;
        }
    }
    ans = max(ans, n - pos); // Check the last segment of 'L's
    cout << ans << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    long long t;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
    return 0;
}