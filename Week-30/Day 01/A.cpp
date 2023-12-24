//
// Created by Foysal Munsy on 22 / 12 / 2023
// Time: 20 : 04 : 19
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

void solve()
{
    string n;
    cin >> n;
    ll N = 0;
    for (auto c : n)
    {
        N = ((c - '0') + N) % 3;
    }
    cout << (N == 0 ? "YES\n" : "NO\n");
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