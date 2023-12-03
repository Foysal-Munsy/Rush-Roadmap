//
// Created by Foysal Munsy on 02 / 12 / 2023
// Time: 17 : 58 : 03
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

int n;

void solve()
{

    int G = 0;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            G += gcd(i, j);
        }
    cout << G << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    for (; cin >> n;)
    {
        if (n == 0)
            break;
        solve();
    }
    return 0;
}