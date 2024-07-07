//
// Created by Foysal Munsy on 07 / 07 / 2024
// Time: 21 : 17 : 53
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
    // debug(0 % 3);
    // debug(2 % 3);
    // debug(4 % 3);
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < 3; i++)
    {
        a = (a + 1) % 3, b = (b + 2) % 3;
        c = (c + 2) % 3, d = (d + 1) % 3;
        cout << a << " " << b << nl;
        cout << c << " " << d << nl << nl;
    }
    cout << nl;
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