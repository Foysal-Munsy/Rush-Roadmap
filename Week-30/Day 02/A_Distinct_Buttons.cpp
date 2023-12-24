//
// Created by Foysal Munsy on 23 / 12 / 2023
// Time: 20 : 48 : 54
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
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    bool x_pos = false, x_neg = false, y_pos = false, y_neg = false;
    size_t x, y;
    for (; n--;)
    {
        cin >> x >> y;
        vp.push_back({x, y});
    }
    for (auto [x, y] : vp)
    {

        if (y > 0)
            y_pos = true;
        if (y < 0)
            y_neg = true;
        if (x > 0)
            x_pos = true;
        if (x < 0)
            x_neg = true;
    }
    debug(x_pos, x_neg, y_pos, y_neg);

    if (x_pos and x_neg and y_pos and y_neg)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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
