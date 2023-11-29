//
// Created by Foysal Munsy on 27 / 11 / 2023
// Time: 22 : 15 : 50
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
    int n, t;
    cin >> n >> t;
    vector<int> a(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n;)
    {
        if (i == t)
        {
            cout << "YES\n";
            return;
        }
        if (i > t)
        {
            cout << "NO\n";
            return;
        }
        i += a[i];
    }
    cout << "NO\n";
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