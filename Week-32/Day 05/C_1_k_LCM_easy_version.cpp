//
// Created by Foysal Munsy on 09 / 01 / 2024
// Time: 20 : 21 : 48
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
    int n, k;
    cin >> n >> k;
    int a = 0, b = 0, c = 0;
    a = (n % 4 == 0) ? n / 2 : (!(n & 1) ? 2 : 1);
    n -= a;
    b = n / 2;
    n -= b;
    c = n;
    cout << a << " " << b << " " << c << '\n';
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