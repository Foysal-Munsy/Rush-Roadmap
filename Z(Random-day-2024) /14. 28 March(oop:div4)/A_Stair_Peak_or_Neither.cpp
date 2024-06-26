//
// Created by Foysal Munsy on 28 / 03 / 2024
// Time: 20 : 46 : 09
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "STAIR\n";
    }
    else if (a < b && b > c)
    {
        cout << "PEAK\n";
    }
    else
    {
        cout << "NONE\n";
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