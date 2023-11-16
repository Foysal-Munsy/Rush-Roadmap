//
// Created by Foysal Munsy on 15 / 11 / 2023
// Time: 11 : 37 : 54
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
    int n, j = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    /*
    1 2 3 4 5 6
    4 1 5 2 6 3
    */
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i += 2)
        b[i] = a[j++];
    for (int i = 0; i < n; i += 2)
        b[i] = a[j++];

    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
        if (b[i] < b[i - 1] && b[i] < b[i + 1])
            cnt++;

    cout << cnt << '\n';
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << '\n';
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