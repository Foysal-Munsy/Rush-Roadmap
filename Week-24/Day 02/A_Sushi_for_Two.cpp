//
// Created by Foysal Munsy on 11 / 11 / 2023
// Time: 22 : 00 : 15
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> track;
    int sz = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i - 1])
        {
            sz++;
        }
        else
        {
            track.push_back(sz);
            sz = 1;
        }
    }
    track.push_back(sz);

    int max_sz = 0;
    for (int i = 1; i < track.size(); ++i)
    {
        max_sz = max(max_sz, 2 * min(track[i], track[i - 1]));
    }

    cout << max_sz << nl;
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
