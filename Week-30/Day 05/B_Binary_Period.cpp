//
// Created by Foysal Munsy on 26 / 12 / 2023
// Time: 11 : 14 : 55
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    string t;
    cin >> t;
    string s = "";
    s = t;
    int zero = 0, one = 0;
    for (auto &i : t)
    {
        if (i == '0')
            ++zero;
        else
            ++one;
    }
    if (zero == 0 or one == 0)
    {
        cout << s << '\n';
    }
    else
    {
        s.clear();
        for (int i = 0; i < 2 * t.size(); i++)
        {
            if (!(i & 1))
                s += '0';
            else
                s += '1';
        }
        cout << s << '\n';
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