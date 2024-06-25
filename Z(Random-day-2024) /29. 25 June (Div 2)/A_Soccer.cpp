//
// Created by Foysal Munsy on 25 / 06 / 2024
// Time: 20 : 44 : 37
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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > y1)
    {
        if (x2 < y2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    else if (x1 < y1)
    {
        if (x2 > y2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    else
    {
        cout << "NO\n";
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