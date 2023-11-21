//
// Created by Foysal Munsy on 17 / 11 / 2023
// Time: 17 : 04 : 30
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
    int upper_cnt = 0;
    for (char c : s)
    {
        if (isupper(c))
            upper_cnt++;
    }
    if (upper_cnt == s.size() || (islower(s[0]) && upper_cnt == s.size() - 1))
    {
        for (char &c : s)
        {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
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