//
// Created by Foysal Munsy on 25 / 06 / 2024
// Time: 21 : 27 : 35
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
    ll x, y, k, store = 0;
    cin >> x >> y >> k;
    // for (ll i = 1; i <= k; i++)
    // {
    //     x += 1;
    //     if (x % y == 0)
    //     {
    //         store = i;
    //         break;
    //     }
    // }
    // if (store == 0)
    // {
    //     cout << x << '\n';
    //     return;
    // }
    // else
    // {
    while (k >= y - (x % y))
    {
        k -= y - (x % y);
        x += y - (x % y);
        while (x % y == 0)
        {
            x /= y;
        }
        if (x == 1)
        {
            k %= y - (x % y);
            x += k;
            k = 0;
            break;
        }
    }

    x += k;
    cout << x << '\n';
    // }

    // while (x % y == 0)
    //     x /= y;

    // ll baki = k - store;
    // k -= store;
    // // debug(x, k, store);
    // while (k--)
    // {
    //     x += 1;
    //     // while (x / y == 1)
    //     // {
    //     //     x = 1;
    //     // }
    //     while (x % y == 0)
    //         x /= y;
    // }
    // // // cout << x << '\n';
    // // // cout << 8 % 3;
    // cout << x << '\n';

    //
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