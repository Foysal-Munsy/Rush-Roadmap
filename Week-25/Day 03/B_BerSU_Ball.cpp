//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 12 : 12 : 48
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
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int m;
    cin >> m;
    vector<int> b(m);
    for (auto &i : b)
        cin >> i;
    sort(b.begin(), b.end());

    int i = 0, j = 0, pair = 0;
    while (i < n and j < m)
    {
        if (a[i] == b[j] or abs(a[i] - b[j]) == 1)
        {
            pair++;
            i++, j++;
        }
        else if (a[i] < b[j] and !(abs(a[i] - b[j]) == 1))
        {
            i++;
        }
        else if (a[i] > b[j] and !(abs(a[i] - b[j]) == 1))
        {
            j++;
        }
    }
    cout << pair << '\n';
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