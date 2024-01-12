//
// Created by Foysal Munsy on 06 / 01 / 2024
// Time: 15 : 37 : 30
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
    ll A, B;
    cin >> A >> B;
    if (B == 1)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
        cout << A * B << " " << A << " " << A * (B + 1) << '\n';
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