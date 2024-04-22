//
// Created by Foysal Munsy on 15 / 02 / 2024
// Time: 00 : 52 : 13
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

    if (k == 1 || (n % 2 == 0 && k == 2))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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