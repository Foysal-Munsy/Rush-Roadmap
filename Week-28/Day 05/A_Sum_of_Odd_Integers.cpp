//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 08 : 11 : 59
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

void solve()
{
    long long n, k;
    cin >> n >> k;
    bool flag = false;
    if ((n & 1) and (k & 1))
    {
        if (k * k > n)
            flag = false;
        else
            flag = true;
    }
    else if (!(n & 1) and !(k & 1))
    {
        if (k * k > n)
            flag = false;
        else
            flag = true;
    }
    cout << (flag ? "YES\n" : "NO\n");
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
