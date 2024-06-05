//
// Created by Foysal Munsy on 04 / 06 / 2024
// Time: 21 : 50 : 43
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
    //
    ll n, m;
    cin >> n >> m;
    // ll equ = (n - m) | n - (m - 1) | n + (2 - m);
    // a[n-1] | a[n] | a[n+1]
    // n-1
    ll left = (n - 2) | (n - 1) | n;
    // n
    ll mid = (n - 1) | n | (n + 1);
    // n+1
    ll right = n | (n + 1) | (n + 2);
    // cout << ((left - m) | mid - (m - 1) | right + (2 - m)) << "\n";
    ll start = n - m, ans = 0;
}
signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
    return 0;
}