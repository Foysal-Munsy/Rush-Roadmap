//
// Created by Foysal Munsy on 18 / 01 / 2024
// Time: 20 : 48 : 07
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
    ll d, t;
    string s;
    cin >> s;
    d = s.size();
    t = (1 << d) - 2;
    ll p = 0;
    for (ll i = d - 1; i >= 0; i--)
    {
        if (s[i] == '7')
        {
            p += pow(2, d - i - 1);
        }
    }
    p++;
    t += p;
    cout << t;
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