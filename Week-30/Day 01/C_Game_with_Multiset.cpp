//
// Created by Foysal Munsy on 22 / 12 / 2023
// Time: 15 : 11 : 02
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
    ll m;
    cin >> m;
    map<ll, ll> mp;
    while (m--)
    {
        ll t;
        cin >> t;
        /*
            1 0
            1 0
            1 0
            2 3
            2 4
        */
        if (t == 1)
        {
            ll x;
            cin >> x;
            mp[x]++;
            // debug(mp);
        }
        else if (t == 2)
        {
            ll w;
            cin >> w;
            bool ok = true;
            ll curr = 0;
            for (int i = 0; i < 30; i++)
            {
                curr += mp[i];
                if (w >> i & 1)
                {
                    if (curr == 0)
                    {
                        ok = false;
                        break;
                    }
                    curr--;
                }
                curr /= 2;
            }
            cout << (ok ? "YES\n" : "NO\n");
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