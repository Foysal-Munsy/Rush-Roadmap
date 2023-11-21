//
// Created by Foysal Munsy on 17 / 11 / 2023
// Time: 16 : 19 : 30
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 1, len = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] <= a[i])
        {
            len++;
            ans = max(ans, len);
        }
        else
        {
            len = 1;
        }
    }

    cout << ans << '\n';

    debug(a);
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