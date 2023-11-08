//
// Created by Foysal Munsy on 07 / 11 / 2023
// Time: 22 : 22 : 51
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll q;
    cin >> q;
    for (; q--;)
    {
        ll x;
        cin >> x;

        auto lo = lower_bound(a.begin(), a.end(), x);
        if (lo != a.begin())
            cout << *(--lo) << " ";
        else
            cout << "X ";

        auto up = upper_bound(a.begin(), a.end(), x);

        if (up != a.end())
            cout << *up << nl;
        else
            cout << "X\n";
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