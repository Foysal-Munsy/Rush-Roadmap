//
// Created by Foysal Munsy on 19 / 11 / 2023
// Time: 13 : 35 : 30
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
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (s[i] > '4' and (i > 0 or s[i] < '9'))
            s[i] = '9' - s[i] + '0';
    }
    cout << s << '\n';
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