//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 13 : 59 : 51
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
    string s;
    cin >> s;
    int n = s.size();

    vector<int> prefix(n, 0);
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + (s[i] == s[i - 1]);
    }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r - 1] - prefix[l - 1] << '\n';
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