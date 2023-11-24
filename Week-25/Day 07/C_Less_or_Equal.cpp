//
// Created by Foysal Munsy on 23 / 11 / 2023
// Time: 21 : 43 : 28
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
    long long n, k;
    cin >> n >> k;
    k--;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());

    if (k == -1)
    {
        if (a[0] == 1)
            cout << "-1\n";
        else
            cout << "1\n";
    }
    else if (k == n - 1 or a[k] != a[k + 1])
    {
        cout << a[k] << "\n";
    }
    else
    {
        cout << "-1\n";
    }

    debug(a);
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