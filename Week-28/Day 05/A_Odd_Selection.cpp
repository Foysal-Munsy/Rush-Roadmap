//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 09 : 02 : 31
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int odd = 0, evn = 0;
    for (auto &i : a)
    {
        cin >> i;
        if (i & 1)
            ++odd;
        else
            ++evn;
    }
    bool flag = false;
    if (n == k)
    {
        ((odd & 1) ? flag = true : flag = false);
    }
    else
    {
        (odd > 0 and ((!(k & 1) and evn != 0) or (k & 1)) ? flag = true : flag = false);
    }
    cout << (flag ? "Yes\n" : "No\n");
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