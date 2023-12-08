//
// Created by Foysal Munsy on 06 / 12 / 2023
// Time: 22 : 24 : 56
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
    ll n;
    cin >> n;
    ll a = 1, b = n / 3, temp = n - b, temp_C = 0;
    ll c = 1;
    while (true)
    {
        if (lcm(a, b) + lcm(b, c) + lcm(c, a) == n)
        {
            temp_C = c;
            break;
        }
        c++;
        if (c > b)
        {
            cout << -1 << nl;
            return;
        }
    }
    // c = abs(n - b - (b * n / b));
    cout << a << " " << b << " " << c << nl;
    // ll ans = lcm(a, b) + lcm(b, c) + lcm(c, a);
    // cout << ((ans == n) ? ans : -1) << nl;
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