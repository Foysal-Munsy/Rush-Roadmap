//
// Created by Foysal Munsy on 26 / 11 / 2023
// Time: 21 : 16 : 36
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
    string s;
    cin >> s;
    if (s.find("...") != string::npos)
    {
        cout << 2 << nl;
    }
    else
    {
        int empty = 0, blk = 0;
        for (auto c : s)
        {
            if (c == '.')
                empty++;
            else
                blk++;
        }
        if (empty > 0)
            cout << empty << nl;
        else
            cout << 0 << nl;
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}