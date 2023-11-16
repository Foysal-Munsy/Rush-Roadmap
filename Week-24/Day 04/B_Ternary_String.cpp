//
// Created by Foysal Munsy on 13 / 11 / 2023
// Time: 21 : 33 : 21
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
    int i = 0, j = 0, n = s.size(), ans = INT_MAX, flag = 1;
    map<char, int> mp;
    while (i < n)
    {
        mp[s[i]]++;
        // condition : jodi sob gula element er count 0 theke boro hoy tahole loop e dhukbo
        while (mp['1'] > 0 and mp['2'] > 0 and mp['3'] > 0)
        {
            flag = 0;
            ans = min(ans, i - j + 1);
            mp[s[j]]--;
            ++j;
        }
        // otherwise
        ++i;
    }
    cout << (flag == 1 ? 0 : ans) << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    long long t = 1;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
    return 0;
}