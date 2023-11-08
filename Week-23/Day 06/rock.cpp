//
// Created by Foysal Munsy on 08 / 11 / 2023
// Time: 22 : 08 : 20
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
    string a, b;
    cin >> a >> b;
    int he = 0, she = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R' and b[i] == 'S')
            he++;
        else if (a[i] == 'S' and b[i] == 'P')
            he++;
        else if (a[i] == 'P' and b[i] == 'R')
            he++;
        // else
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'R' and a[i] == 'S')
            she++;
        else if (b[i] == 'S' and a[i] == 'P')
            she++;
        else if (b[i] == 'P' and a[i] == 'R')
            she++;
    }
    int ans = 0;
    if (she >= he)
    {
        ans = ((he + she) / 2) + 1;
        ans -= he;
    }
    cout << ans << nl;
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