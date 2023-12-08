//
// Created by Foysal Munsy on 06 / 12 / 2023
// Time: 21 : 23 : 56
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
    long long n;
    cin >> n;
    if (n == 1 or n == 2)
    {
        cout << "-1\n";
    }
    else
    {
        if (n % 3 == 0)
        {
            long long i = n / 3;
            cout << i << " " << i << " " << i << '\n';
        }
        else
        {
            cout << "1 1 " << n - 2 << '\n';
        }
    }
    debug(lcm(5, 1));
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