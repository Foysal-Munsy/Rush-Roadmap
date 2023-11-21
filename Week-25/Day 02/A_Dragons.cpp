//
// Created by Foysal Munsy on 18 / 11 / 2023
// Time: 20 : 23 : 41
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
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }

    sort(a.begin(), a.end());
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i].first < s)
        {
            s += a[i].second;
        }
        else
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
    debug(a, track);
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