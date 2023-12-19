//
// Created by Foysal Munsy on 18 / 12 / 2023
// Time: 22 : 05 : 55
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

void solve()
{
    ll q;
    cin >> q;
    map<ll, ll> freq;
    // 2^x track korbe map
    while (q--)
    {
        ll queryType;
        cin >> queryType;
        // jodi add q hoy
        if (queryType == 1)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }
        else // jodi get q hoy
        {
            ll w;
            cin >> w;
            map<ll, ll> temp = freq;
            bool is_possible = true;
            for (auto it = temp.rbegin(); it != temp.rend(); ++it)
            {
                // amr curr power
                ll value = (1 << (*it).first);
                // jodi sum bigger or shoman hoy tahole aro elements baki
                while (w >= value and (*it).second > 0)
                {
                    w -= value;
                    (*it).second--;
                }
            }
            if (w > 0) // sum ekhono ki baki? tahole possible na
                is_possible = false;
            cout << (is_possible ? "YES\n" : "NO\n");
        }
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}