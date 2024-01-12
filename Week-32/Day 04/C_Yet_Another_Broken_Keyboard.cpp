//
// Created by Foysal Munsy on 08 / 01 / 2024
// Time: 07 : 19 : 16
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < k; i++)
    {
        char c;
        cin >> c;

        for (auto &ch : s)
        {
            if (ch == c)
            {
                ch = '#';
            }
        }
    }
    ll subs = 0, ans = 0;
    for (auto &ch : s)
    {
        if (ch == '#')
            subs++;
        else
        {
            if (subs > 0)
            {
                ans += subs * (subs + 1) / 2;
                subs = 0;
            }
        }
    }
    if (subs > 0)
        ans += subs * (subs + 1) / 2;
    cout << ans << nl;
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