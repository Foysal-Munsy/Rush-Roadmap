//
// Created by Foysal Munsy on 30 / 12 / 2023
// Time: 21 : 23 : 27
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
    ll a, b;
    cin >> a >> b;

    ll t = gcd(a, b);
    ll product = a * b;

    if (product / t == b)
    {
        ll i = 2;
        while (i * i <= b)
        {
            if ((i <= a && a % i == 0) || b % i == 0)
            {
                cout << b * i << nl;
                return;
            }
            i++;
        }
        cout << b * b << nl;
    }
    else
    {
        cout << product / t << nl;
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