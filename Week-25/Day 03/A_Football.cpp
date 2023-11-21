//
// Created by Foysal Munsy on 18 / 11 / 2023
// Time: 23 : 44 : 59
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
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    if (!mp.empty())
    {
        string win_team = mp.begin()->first;
        int max_count = mp.begin()->second;

        for (auto i : mp)
        {
            if (i.second > max_count)
            {
                max_count = i.second;
                win_team = i.first;
            }
        }

        cout << win_team << '\n';
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