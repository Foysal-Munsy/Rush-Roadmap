//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 00 : 19 : 54
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
    vector<pair<int, int>> pair;
    for (int i = 0; i < n; ++i)
    {
        int ai, bi;
        cin >> ai >> bi;
        pair.push_back({ai, bi});
    }
    sort(pair.begin(), pair.end());
    bool flag = false;
    if (!pair.empty())
    {
        int quality = pair.begin()->second;
        for (auto i : pair)
        {
            if (quality > i.second)
            {
                flag = true;
                break;
            }
            quality = i.second;
        }
    }
    cout << (flag ? "Happy Alex\n" : "Poor Alex\n");
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