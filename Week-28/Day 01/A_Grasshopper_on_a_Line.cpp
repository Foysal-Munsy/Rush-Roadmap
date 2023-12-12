//
// Created by Foysal Munsy on 08 / 12 / 2023
// Time: 21 : 52 : 48
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    int x, k;
    cin >> x >> k;
    vector<int> a;
    int mx = 0;
    for (int i = 1; i <= x; i++)
    {
        if ((i % k) == 0)
            continue;
        else
        {
            mx = (mx, i);
        }
    }
    if (mx == x)
    {
        cout << 1 << nl;
        cout << mx << nl;
    }
    else
    {
        cout << 2 << nl;
        cout << mx << " " << 1 << nl;
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