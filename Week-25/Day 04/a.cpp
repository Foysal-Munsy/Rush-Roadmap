//
// Created by Foysal Munsy on 20 / 11 / 2023
// Time: 19 : 25 : 04
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
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
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += coins[i];
    }

    int coins_needed = 0, my_sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        my_sum += coins[i];
        total -= coins[i];
        coins_needed++;
        if (my_sum > total)
        {
            break;
        }
    }

    cout << coins_needed << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}